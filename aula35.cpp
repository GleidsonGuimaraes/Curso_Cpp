// Struct - Parte 3

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

    // Trabalhando com array na struct
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    carros[0].inserir("WRX", "Azul", 350, 260);
    carros[1].inserir("GTR", "Prata", 700, 330);
    carros[2].inserir("BRZ", "Vermelho", 370, 270);
    carros[3].inserir("JCW", "Verde", 220, 240);
    carros[4].inserir("M5", "Branco", 500, 320);

    for(int i = 0; i < 5; i++){
        carros[i].mostrar();
    }

    return 0;
}