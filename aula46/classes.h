/*
    O metodo get retorna o valor de uma propriedade da classe
    O metodo set atribui um valor de uma propriedade da classe
*/

#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{

public:
    int tipo;
    int vel;
    Veiculo(int tp);
    int getVelMax();
    bool getLigado();
    bool setLigado(int l);
    void imprimir();
    void velAtual(int v);
private:
    string nome;
    int velMax;
    bool ligado;
    void setVelMax(int vm);
};

void Veiculo::imprimir(){
    cout << "Nome:              " << nome << endl;
    cout << "Velocidade Maxima: " << velMax << endl;
    (ligado==1) ? (cout << "Veiculo ligado." << endl) : (cout << "Veiculo desligado." << endl);
    (ligado==1) ? (cout << "Velocidade Atual:  " << vel << endl) : (cout << "Velocidade Atual:  " << 0 << endl);
    cout << endl;
}

void Veiculo::velAtual(int v){
    vel = v;
    if(vel > velMax){
        vel = velMax;
    }else if(vel < 0){
        vel = 0;
    }
}

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

bool Veiculo::getLigado(){
    return ligado;
}

bool Veiculo::setLigado(int l){
    if(l == 1){
        ligado = true;
    }else if(l == 0){
        ligado = false;
    }
    return ligado;
}

Veiculo::Veiculo(int tp){
    // 1 = Carro    2 = Aviao   3 = Navio
    tipo = tp;
    if(tipo == 1){
        nome = "Carro"; // Uma propriedade privada pode ser atribuida diretamente pelo construtor, porque este método também faz parte da classe
        setVelMax(200);
    }else if(tipo == 2){
        nome = "Aviao"; // Uma propriedade privada pode ser atribuida diretamente pelo construtor, porque este método também faz parte da classe
        setVelMax(800);
    }else if(tipo == 3){
        nome = "Navio"; // Uma propriedade privada pode ser atribuida diretamente pelo construtor, porque este método também faz parte da classe
        setVelMax(120);
    }
    ligado = false;
}

#endif