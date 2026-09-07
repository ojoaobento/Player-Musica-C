#include "funcoes.h"

void salvarLixeira(ListaMusica *lixeira){

    ApontadorMusica p;

    FILE *f = fopen("lixeira.dat", "wb");

    p = lixeira->primeiro;

    while(p != NULL){
        fwrite(&p->conteudo, sizeof(Musicas),1,f);
        p = p->proximo;
    }

    fclose(f);
}