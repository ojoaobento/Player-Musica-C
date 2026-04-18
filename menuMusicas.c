#include "funcoes.h"


void menuMusicas(ListaMusica *ListaMusica){

    int opcao;

    do {
        system("cls");
        tela();

        gotoxy(34,8);
        printf("MENU MUSICAS");

        gotoxy(32,11);
        printf("1 - CATALOGO");

        gotoxy(32,12);
        printf("2 - TOCAR");

        gotoxy(32,13);
        printf("3 - SAIR");

        gotoxy(32,15);
        printf("OPCAO : ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:

                break;
        }



    }while(opcao != 3);
}