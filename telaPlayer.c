#include "funcoes.h"

void telaPlayer(){
    int i, c;
    
    system("color 02");

    for(i=1;i<=24;i++){
        gotoxy(1,i);   printf("|");
        gotoxy(79,i);  printf("|");
    }

    for(c=2;c<=78;c++){
        gotoxy(c,1);   printf("-");
        gotoxy(c,3);   printf("-");
        gotoxy(c,14);  printf("-");
        gotoxy(c,22);  printf("-");
        gotoxy(c,24);  printf("-");
    }

    gotoxy(1,1);   printf("+");   gotoxy(79,1);  printf("+");
    gotoxy(1,3);   printf("+");   gotoxy(79,3);  printf("+");
    gotoxy(1,22);  printf("+");   gotoxy(79,22); printf("+");
    gotoxy(1,24);  printf("+");   gotoxy(79,24); printf("+");

    gotoxy(35,2);  printf("PLAYER");

    gotoxy(3,17);
    printf("[^ v] NAVEGAR");

    gotoxy(3,18);
    printf("[ENTER] TOCAR / PAUSAR");

    gotoxy(3,19);
    printf("[->] PROXIMA");

    gotoxy(3,20);
    printf("[<-] ANTERIOR");

    gotoxy(3,21);
    printf("[ESC] VOLTAR");

    gotoxy(2, 23);
    printf("MSG:");

}