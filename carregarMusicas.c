#include "funcoes.h"


void carregarMusicas(ListaMusica *listaMusica){

    ApontadorMusica novo;
    int id=1;
    DIR *dir = opendir("../musicas");

    struct dirent *arquivo;

    while((arquivo = readdir(dir)) != NULL){
        if(strstr(arquivo->d_name, ".wav") != NULL){
            novo = (ApontadorMusica) malloc(sizeof(TipoMusica));

            novo->conteudo.id = id++;

            strcpy(novo->conteudo.musica, arquivo->d_name);
            
            sprintf(novo->conteudo.caminho,"../musicas/%s", arquivo->d_name);

            novo->proximo = NULL;
            novo->anterior = listaMusica->ultimo;

            if(listaMusica->primeiro == NULL){
                listaMusica->primeiro = novo;
                listaMusica->ultimo = novo;
            }else{
                listaMusica->ultimo->proximo = novo;
                listaMusica->ultimo = novo;
            }
        }
    }
    closedir(dir);
}