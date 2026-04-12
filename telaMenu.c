#include "funcoes.h"


void telaMenu(){
    
    int opcao;

    do {
        limpa_msg();

        gotoxy(34,8);
        printf("MENU PRINCIPAL");

        gotoxy(32,11);
        printf("1 - MUSICAS");

        gotoxy(32,12);
        printf("2 - PLAYER");

        gotoxy(32,13);
        printf("3 - LIXEIRA");

        gotoxy(32,14);
        printf("4 - RELATORIOS");

        gotoxy(32,15);
        printf("5 - SAIR");

        gotoxy(43,17);
        printf("     ");

        gotoxy(35,17);
        printf("OPCAO : ");
        scanf("%d", &opcao);


        switch(opcao){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                break;
            default:
                system("cls");
                tela();
                limpa_msg();
                gotoxy(2,23);
                printf("OPCAO INVALIDA, VOLTE AO MENU PRINCIPAL......");
                getch();
                return;
                break;
        }

    }while(opcao != 5);

}