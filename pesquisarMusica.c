#include "funcoes.h"

ApontadorMusica pesquisarMusica(ListaMusica *listaMusica, int id){

    ApontadorMusica p;

    p = listaMusica->primeiro;

    while(p != NULL){
        if(p->conteudo.id == id){
            return p;
        }
        p = p->proximo;
    }
    return NULL;
}