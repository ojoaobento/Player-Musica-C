#include "funcoes.h"

void tela(){
    int i, c;

    for(i=1;i<=24;i++){
        gotoxy(1,i);   printf("|");
        gotoxy(79,i);  printf("|");
    }

    for(c=2;c<=78;c++){
        gotoxy(c,1);   printf("-");
        gotoxy(c,4);   printf("-");
        gotoxy(c,22);  printf("-");
        gotoxy(c,24);  printf("-");
    }

    gotoxy(1,1);   printf("+");   gotoxy(79,1);  printf("+");
    gotoxy(1,4);   printf("+");   gotoxy(79,4);  printf("+");
    gotoxy(1,22);  printf("+");   gotoxy(79,22); printf("+");
    gotoxy(1,24);  printf("+");   gotoxy(79,24); printf("+");

    gotoxy(3,2);  printf("PLAYER");
    gotoxy(3,3);  printf("");
    gotoxy(3,4);  printf("");
    gotoxy(43,2); printf("");
    gotoxy(43,3); printf("");

    gotoxy(32,5);
    printf("PLAYER DE MUSICA");

    gotoxy(35,6);
    printf("SOUND MUSIC");


    gotoxy(2, 23);
    printf("MSG:");

}