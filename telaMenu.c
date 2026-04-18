#include "funcoes.h"


void telaMenu(ListaMusica *listaMusica){
    
    int opcao;

    do {

        system("cls");
        tela();

        limpa_msg();

        gotoxy(34,8);
        printf("MENU PRINCIPAL");

        gotoxy(32,11);
        printf("1 - MUSICAS");

        gotoxy(32,12);
        printf("2 - LIXEIRA");

        gotoxy(32,13);
        printf("3 - RELATORIOS");

        gotoxy(32,14);
        printf("4 - SAIR");

        gotoxy(35,16);
        printf("OPCAO : ");
        scanf("%d", &opcao);


        switch(opcao){
            case 1:
                menuMusicas(listaMusica);
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            default:
                system("cls");
                tela();
                limpa_msg();
                gotoxy(2,23);
                printf("OPCAO INVALIDA, VOLTE AO MENU PRINCIPAL......");
                getch();
                break;
        }

    }while(opcao != 4);

}