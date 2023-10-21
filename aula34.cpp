// Struct - Parte 2

#include <iostream>

using namespace std;

struct Carro{ // declarando o struct do tipo Carro
    string nome, cor; // declarando os atributos do carro
    int potencia, velMax, velAtual;

    // trabalhando com métodos / funções na struct
    void inserir(string stNome, string stCor, int stPotencia, int stVelMax){
        nome = stNome;
        cor = stCor;
        potencia = stPotencia;
        velMax = stVelMax;
        velAtual = 0;
    }

    void mostrar(){
        cout << "Nome:              " << nome << "\n";
        cout << "Cor:               " << cor << "\n";
        cout << "Potencia:          " << potencia << "\n";
        cout << "Velocidade atual:  " << velAtual << "\n";
        cout << "Velocidade maxima: " << velMax << "\n\n";
    }

    void alterarVel(int mv){
        velAtual = mv;
        if(velAtual > velMax){
            velAtual = velMax;
        }else if(velAtual < 0){
            velAtual = 0;
        }
    }
};


int main(){

    Carro car1; // declarando duas estruturas do tipo Carro com o identificador car1

    car1.inserir("WRX", "Azul", 350, 260);
    car1.alterarVel(130);

    car1.mostrar();

    return 0;
}