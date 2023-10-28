#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{ // Classe pai
    public:
        int vel;
        int blind;
        int rodas;
        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);
        void imprimir();
    private: // propriedades privadas só podem ser acessadas por dentro da propria classe
        int tipo;
        int velMax;
        bool arma;
};

void Veiculo::imprimir(){
    if(tipo == 1){
        cout << "Tipo do veiculo: Moto" << endl;
    }else if(tipo == 2){
        cout << "Tipo do veiculo: Carro" << endl;
    }else if(tipo == 3){
        cout << "Tipo do veiculo: Tanque de Guerra" << endl;
    }
    cout << "Velocidade maxima: " << velMax << endl;
    cout << "Quantidade de rodas: " << rodas << endl;
    cout << "Blindagem: " << blind << endl;
    cout << "Armamento: " << arma << endl;
    cout << endl;
}

void Veiculo::setTipo(int tp){
    tipo = tp;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

void Veiculo::setArma(bool ar){
    arma = ar;
}

class Moto:public Veiculo{ // classe filho
    public:
        Moto();
    private:
};

class Carro:public Veiculo { // classe filho
    public:
        Carro();
    private:
};

class Tanque:public Veiculo { // classe filho
    public:
        Tanque();
    private:
};

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}

Carro::Carro(){
    vel = 0;
    blind = 1;
    rodas = 4;
    setTipo(2);
    setVelMax(195);
    setArma(false);
}

Tanque::Tanque(){
    vel = 0;
    blind = 1;
    rodas = 8;
    setTipo(3);
    setVelMax(80);
    setArma(true);
}

#endif // CLASSES_H_INCLUDED