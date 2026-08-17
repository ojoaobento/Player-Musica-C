#include "funcoes.h"

void catalogo(ListaMusica *listaMusica){
    
    ApontadorMusica p;
    ApontadorMusica pagina[100];
    int paginaAtual=0;
    int avancar=1;
    int i;
    int opcao;
    int contador;

    ordenarCatalogo(listaMusica);

    pagina[0] = listaMusica->primeiro;


    while(avancar) {
        system("cls");
        telaCatalogo();

        p = pagina[paginaAtual];
        i=7;
        contador=0;
        while(p != NULL && contador < 12){

            gotoxy(3,i);
            printf("%d", p->conteudo.id);

            gotoxy(8,i);
            printf("%s", p->conteudo.musica);

            i++;
            p = p->proximo;
            contador++;

        }

        limpa_msg();
        gotoxy(2,23);
        printf("[<] VOLTAR - AVANCAR [>] - SAIR [0]");

        opcao = getch();


        if(opcao == 224){

            opcao=getch();

            switch(opcao){
                case 77:
                    if(p != NULL && paginaAtual < 99){
                        paginaAtual++;
                        pagina[paginaAtual] = p;
                    }
                    break;
                case 75:
                    if(paginaAtual > 0){
                        paginaAtual--;
                    }
                    break;
            }
        }else{
            if(opcao == 0){
                return;
            }else{
                system("cls");
                limpa_msg();
                printf("OPCAO INVALIDA......");
                getch();   
                return;   
            }
        }
    }
}