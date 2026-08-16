#include "funcoes.h"

void playerMusica(ListaMusica *listaMusica){


    ApontadorMusica p;
    ApontadorMusica musicaSelecionada;

    int i;

    system("cls");
    telaPlayer();

    i=4;
    p = listaMusica->primeiro;
    while(p != NULL){


        gotoxy(3,i);
        printf("%s", p->conteudo.musica);

        i++;
        p = p->proximo;

    }


    getch();

}