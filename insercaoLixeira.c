#include "funcoes.h"


void insercaoLixeira(Musicas musica,ListaMusica *lixeira){

    ApontadorMusica novo;

    novo = (ApontadorMusica) malloc(sizeof(TipoMusica));


    novo->conteudo = musica;
    novo->proximo = NULL;
    novo->anterior = lixeira->ultimo;

    if(lixeira->primeiro == NULL){
        lixeira->primeiro = novo;
        lixeira->ultimo = novo;
    }else{
        lixeira->ultimo->proximo = novo;
        lixeira->ultimo = novo;
    }

}