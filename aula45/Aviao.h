// OBS: O arquivo .h só é compilado junto com o .cpp
#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

using namespace std;

class Aviao{

public:
    // Parametros
    int vel = 0;
    int velMax;
    string tipo;

    // Prototipo do método construtor
    Aviao(int tp); // método construtor possui o mesmo nome da classe
    void imprimir();

private:

};

// metodo construtor
// quando um objeto da classe aviao for criado, o método construtor é executado automaticamente quando declarado dessa maneira
Aviao::Aviao(int tp){
    // 1 = Jato, 2 = Monomotor, 3 = Planador
    if(tp == 1){
        velMax = 800;
        tipo = "Jato";
    }else if(tp == 2){
        velMax = 350;
        tipo = "Monomotor";
    }else if(tp == 3){
        velMax = 180;
        tipo = "Planador";
    }

}

void Aviao::imprimir(){
    cout << "Tipo:              " << tipo << endl;
    cout << "Velocidade maxima: " << velMax << endl;
    cout << "Velocidade atual:  " << vel << endl;
    cout << endl;
}

#endif // AVIAO_H_INCLUDED