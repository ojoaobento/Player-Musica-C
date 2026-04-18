#ifndef FUNCOES_H
#define FUNCOES_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>



typedef struct{
    int id;
    char musica[100];
    char caminho[200];
}Musicas;


typedef struct TipoMusica *ApontadorMusica;

typedef struct TipoMusica{
    Musicas conteudo;
    ApontadorMusica proximo;
    ApontadorMusica anterior;
}TipoMusica;

typedef struct{
    ApontadorMusica primeiro;
    ApontadorMusica ultimo;
}ListaMusica;


void gotoxy(int x, int y);
void tela();
void telaMenu();
void limpa_msg();
void menuMusicas();
void carregarMusicas();

#endif
