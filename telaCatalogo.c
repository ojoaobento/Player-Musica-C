#include "funcoes.h"

void telaCatalogo(){
    int i, c;

    for(i=1;i<=24;i++){
        gotoxy(1,i);   printf("|");
        gotoxy(79,i);  printf("|");
    }

    for(c=2;c<=78;c++){
        gotoxy(c,1);   printf("-");
        gotoxy(c,5);   printf("-");
        gotoxy(c,22);  printf("-");
        gotoxy(c,24);  printf("-");
    }

    gotoxy(1,1);   printf("+");   gotoxy(79,1);  printf("+");
    gotoxy(1,5);   printf("+");   gotoxy(79,5);  printf("+");
    gotoxy(1,22);  printf("+");   gotoxy(79,22); printf("+");
    gotoxy(1,24);  printf("+");   gotoxy(79,24); printf("+");

    gotoxy(30,2);  printf("CATALOGO DE MUSICAS");
    gotoxy(3,4);  printf("ID");
    gotoxy(20,4);  printf("MUSICA");
    gotoxy(65,4); printf("STATUS");

    gotoxy(3,21);
    printf("[ESC] VOLTAR");

    gotoxy(18,21);
    printf("[F1] EXCLUIR");

    gotoxy(2, 23);
    printf("MSG:");

}