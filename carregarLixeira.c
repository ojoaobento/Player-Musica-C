#include "funcoes.h"

void carregarLixeira(ListaMusica *lixeira){

    ApontadorMusica p;
    Musicas temp;
    
    FILE *f = fopen("lixeira.dat", "rb");

    while(fread(&temp,sizeof(Musicas),1,f) == 1){
        p = (ApontadorMusica) malloc(sizeof(TipoMusica));
        p->conteudo = temp;
        p->proximo = NULL;


        if(lixeira->primeiro == NULL){
            lixeira->primeiro = p;
            lixeira->ultimo = p;
        }else{
            lixeira->ultimo->proximo = p;
            lixeira->ultimo = p;
        }

    }
    fclose(f);
}