// Struct

#include <iostream>

using namespace std;

struct Carro{ // declarando o struct do tipo Carro
    string nome, cor; // declarando os atributos do carro
    int potencia, velMax;
};


int main(){

    Carro car1, car2; // declarando duas estruturas do tipo Carro com o identificador car1 e car2

    car1.nome = "Tornado"; // atribuindo valores aos atributos da estrutura
    car1.cor = "Vermelho";
    car1.potencia = 450;
    car1.velMax = 350;

    car2.nome = "WRX";
    car2.cor = "Azul";
    car2.potencia = 350;
    car2.velMax = 260;

    cout << car1.nome << "\n";
    cout << car1.cor << "\n";
    cout << car1.potencia << "\n";
    cout << car1.velMax << "\n\n";

    cout << car2.nome << "\n";
    cout << car2.cor << "\n";
    cout << car2.potencia << "\n";
    cout << car2.velMax << "\n";

    return 0;
}