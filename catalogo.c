#include "funcoes.h"


void catalogo(ListaMusica *listaMusica){
    
    ApontadorMusica p;
    int i;

    system("cls");
    telaCatalogo();

    ordenarCatalogo(listaMusica);

    p = listaMusica->primeiro;

    i=6;
    while(p != NULL){

        gotoxy(3,i);
        printf("%d", p->conteudo.id);

        gotoxy(10,i);
        printf("%s", p->conteudo.musica);

        i++;
        p = p->proximo;

    }

    getch();



}