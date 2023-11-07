// Classes de armazenamento (auto, register, static)
/*
    A classe "auto" permite declarar a variável e definir seu tipo na inicialização.
        OBS: A classe precisa ser declarada e inicializada já com seu valor atribuido para que o 
        programa identifique o tipo de dados daquela declaração.

    A classe "register" faz a solicitação para o sistema armazenar uma declaração no registrador
    e não na memória ram, mas não é garantido que essa solicitação seja atendida.

    A classe "static" armazena a variável em uma posição da memória e todas as vezes que for utilizada
    ele utiliza sempre a mesma posição daquela memória declarada.
*/

#include <iostream>

using namespace std;

auto Soma(double n1, double n2){
    return n1 + n2;
}

void Somador(){
    // auto i = 0; // Para fins de exemplo da utilização de static
    static auto i = 0;
    i++;
    cout << i << endl;
}

int main(){

    // auto num = 10;
    // auto nome = "Bruno";
    // auto valor = 10.5;

    auto res = Soma(10.5, 5);

    cout << res << endl << endl;

    Somador();
    Somador();
    Somador();
    Somador();

    return 0;
}