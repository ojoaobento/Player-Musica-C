#include "funcoes.h"


void ordenarCatalogo(ListaMusica *listaMusica){

    ApontadorMusica p;
    ApontadorMusica r;
    Musicas temp;
    int trocou;

    do {
        p = listaMusica->primeiro;
        r = p->proximo;
        
        trocou=0;
        while(r != NULL){
            if(p->conteudo.id > r->conteudo.id){
                temp = p->conteudo;
                p->conteudo = r->conteudo;
                r->conteudo = temp;
                trocou=1;
            }
            p = p->proximo;
            r = r->proximo;
        }
    }while(trocou != 0);
}