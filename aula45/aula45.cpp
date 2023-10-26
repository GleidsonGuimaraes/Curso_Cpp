// POO, classe em arquivo externo, Construtor - Parte 2

#include <iostream>
#include "Aviao.h" // Adicionando a classe

using namespace std;

int main(){

    Aviao *av1 = new Aviao(1); // Instanciando um novo objeto e passando o parâmetro para o método construtor da classe
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(3);

    av1->imprimir();
    av2->imprimir();
    av3->imprimir();

    return 0;
}