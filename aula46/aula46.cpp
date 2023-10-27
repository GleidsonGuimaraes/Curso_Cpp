// POO, Classes, Get e Set - Parte 3

#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v1->velAtual(120);
    v2->velAtual(670);
    v3->velAtual(80);

    // 1 = Ligado   2 = Desligado
    v1->setLigado(1);
    v2->setLigado(1);
    v3->setLigado(1);

    v1->imprimir();
    v2->imprimir();
    v3->imprimir();

    return 0;
}