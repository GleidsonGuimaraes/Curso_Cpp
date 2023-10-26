// POO, classes, public, private, métodos - Parte 1

#include <iostream>

using namespace std;

class Aviao{

public:
    // Parametros
    int vel = 0;
    int velMax;
    string tipo;

    // Prototipando métodos
    void ini(int tp);

private:

};

void Aviao::ini(int tp){ // Definindo o método para a classe Aviao
    // 1 = Jato, 2 = Monomotor, 3 = Planador
    if(tp == 1){
        this->velMax = 800;
        this->tipo = "Jato";
    }else if(tp == 2){
        this->velMax = 350;
        this->tipo = "Monomotor";
    }else if(tp == 3){
        this->velMax = 180;
        this->tipo = "Planador";
    }
}

int main(){

    Aviao *av1 = new Aviao(); // instancia de um novo objeto do tipo Aviao
    Aviao *av2 = new Aviao();

    av1->ini(3); // chamando o método ini
    av2->ini(1);

    cout << "Modelo: " << av1->tipo << endl << "Velocidade maxima: " << av1->velMax << "\n\n"; // O operador -> acessa as propriedades e metodos do objeto
    cout << "Modelo: " << av2->tipo << endl << "Velocidade maxima: " << av2->velMax << "\n\n";

    return 0;
}