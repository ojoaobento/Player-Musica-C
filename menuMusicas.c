#include "funcoes.h"


void menuMusicas(ListaMusica *listaMusica, ListaMusica *lixeira){

    int opcao;

    do {
        system("cls");
        tela();

        gotoxy(34,8);
        printf("MENU MUSICAS");

        gotoxy(32,11);
        printf("1 - CATALOGO");

        gotoxy(32,12);
        printf("2 - EXCLUIR");

        gotoxy(32,13);
        printf("0 - SAIR");

        gotoxy(32,15);
        printf("OPCAO : ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                catalogo(listaMusica);
                break;
            case 2:
                excluirMusica(listaMusica, lixeira);
                break;
            case 0:
                return;
                break;
            default:

                break;
        }



    }while(opcao != 0);
}