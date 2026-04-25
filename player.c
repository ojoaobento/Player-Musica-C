#include "funcoes.h"


int main(){
    

    ListaMusica listaMusica;
    ListaMusica lixeira;

    listaMusica.primeiro = NULL;
    listaMusica.ultimo = NULL;
    lixeira.primeiro = NULL;
    lixeira.ultimo = NULL;

    int opcao;

    carregarMusicas(&listaMusica);

    system("color 02");
    tela();
    telaMenu(&listaMusica, &lixeira);

}



