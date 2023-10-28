// POO, Classes, Herança - Parte 4
/*
    Herança é quando uma classe herda propriedades de outra classe
    A classe que fornece propriedades para a outra é chamada de classe pai e a classe que herda as propriedades de classe filho
*/

#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    Moto *v1 = new Moto();
    Carro *c1 = new Carro();
    Tanque *t1 = new Tanque();

    v1->imprimir();
    c1->imprimir();
    t1->imprimir();

    return 0;
}