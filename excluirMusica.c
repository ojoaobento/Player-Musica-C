#include "funcoes.h"

void excluirMusica(ListaMusica *listaMusica, ListaMusica *lixeira){

    ApontadorMusica resultado;
    int id;
    char confirmacao, exclusao;

    do{ 
        system("cls");
        tela();
        
        limpa_msg();
        gotoxy(2,23);
        printf("INSIRA O ID DA MUSICA QUE DESEJA EXCLUIR : ");
        scanf("%d", &id);

        resultado = pesquisarMusica(listaMusica, id);
        
        if(resultado == NULL){
            system("cls");
            limpa_msg();
            gotoxy(2,23);
            printf("O ID INSERIDO NAO EXISTE, RETORNE AO MENU......");
            getch();
            return;
        }else{
            system("cls");
            telaExclusao();

            gotoxy(17,11);
            printf("%d", resultado->conteudo.id);

            gotoxy(17,12);
            printf("%.50s", resultado->conteudo.musica);

            gotoxy(17,13);
            printf("%.61s", resultado->conteudo.caminho);

            limpa_msg();
            gotoxy(2,23);
            printf("CONFIRMAR EXCLUSAO (S/N) ? ");
            scanf(" %c", &confirmacao);

            if(confirmacao == 's' || confirmacao == 'S'){

                if(listaMusica->primeiro == listaMusica->ultimo){
                    listaMusica->primeiro = NULL;
                    listaMusica->ultimo = NULL;

                    insercaoLixeira(resultado->conteudo,lixeira);
                    free(resultado);

                }else if(listaMusica->primeiro == resultado){

                    listaMusica->primeiro = resultado->proximo;
                    listaMusica->primeiro->anterior = NULL;

                    insercaoLixeira(resultado->conteudo,lixeira);
                    free(resultado);

                }else if(listaMusica->ultimo == resultado){
                    listaMusica->ultimo->anterior->proximo = NULL;
                    listaMusica->ultimo = listaMusica->ultimo->anterior;

                    insercaoLixeira(resultado->conteudo,lixeira);
                    free(resultado);

                }else{

                    resultado->anterior->proximo = resultado->proximo;
                    resultado->proximo->anterior = resultado->anterior;

                    insercaoLixeira(resultado->conteudo,lixeira);
                    free(resultado);

                }

                limpa_msg();
                gotoxy(2,23);
                printf("A MUSICA FOI MOVIDA PARA A LIXEIRA.....");
                getch();


            }else{
                return;
            }
        }

        limpa_msg();
        gotoxy(2,23);
        printf("NOVA EXCLUSAO (S/N) ? ");
        scanf(" %c", &exclusao);
    }while(exclusao != 'n' && exclusao != 'N');
}


