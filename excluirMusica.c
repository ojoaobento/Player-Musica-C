#include "funcoes.h"

void excluirMusica(ListaMusica *listaMusica){

    ApontadorMusica resultado;
    ApontadorMusica p;
    ApontadorMusica r;
    int opcao;
    char confirmacao;

    system("cls");
    tela();


    limpa_msg();
    gotoxy(2,23);
    printf("INSIRA O ID DA MUSICA QUE DESEJA EXCLUIR : ");
    scanf("%d", &opcao);

    resultado = pesquisarMusica(listaMusica, opcao);

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
        printf("%s", resultado->conteudo.musica);

        gotoxy(17,13);
        printf("%s", resultado->conteudo.caminho);

        limpa_msg();
        gotoxy(2,23);
        printf("CONFIRMAR EXCLUSAO (S/N) ? ");
        scanf(" %c", &confirmacao);

        if(confirmacao == 's' || confirmacao == 'S'){
            if(listaMusica->primeiro == listaMusica->ultimo){
                free(resultado);
                listaMusica->primeiro = NULL;
                listaMusica->ultimo = NULL;
            }else if(listaMusica->ultimo->conteudo.id == resultado->conteudo.id){
                listaMusica->ultimo->anterior->proximo = NULL;
                listaMusica->ultimo = listaMusica->ultimo->anterior;
                free(resultado);
            }else{
                p = listaMusica->primeiro;
                r = p->proximo;

                while(r != NULL && r->conteudo.id != resultado->conteudo.id){
                    p = p->proximo;
                    r = r->proximo;
                }

                p->proximo = r->proximo;
                r->proximo->anterior = p;
                free(resultado);
            }
        }else{
            return;
        }
    }


}


