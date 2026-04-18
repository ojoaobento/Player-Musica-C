#include "funcoes.h"


int main(){
    

    ListaMusica listaMusica;

    listaMusica.primeiro = NULL;
    listaMusica.ultimo = NULL;

    int opcao;

    carregarMusicas(&listaMusica);

    system("color 02");
    tela();
    telaMenu(&listaMusica);

}



