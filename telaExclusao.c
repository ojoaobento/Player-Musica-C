#include "funcoes.h"

void telaExclusao(){
    int i, c;
    
    system("color 02");

    for(i=1;i<=24;i++){
        gotoxy(1,i);   printf("|");
        gotoxy(79,i);  printf("|");
    }

    for(c=2;c<=78;c++){
        gotoxy(c,1);   printf("-");
        gotoxy(c,3);   printf("-");
        gotoxy(c,22);  printf("-");
        gotoxy(c,24);  printf("-");
    }

    gotoxy(1,1);   printf("+");   gotoxy(79,1);  printf("+");
    gotoxy(1,3);   printf("+");   gotoxy(79,3);  printf("+");
    gotoxy(1,22);  printf("+");   gotoxy(79,22); printf("+");
    gotoxy(1,24);  printf("+");   gotoxy(79,24); printf("+");

    gotoxy(3,2);  printf("MUSICAS");

    gotoxy(5,11);
    printf("ID........: ");

    gotoxy(5,12);
    printf("MUSICA....: ");

    gotoxy(5,13);
    printf("CAMINHO...: ");

    gotoxy(2, 23);
    printf("MSG:");
}