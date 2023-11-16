// Map - Smart pointer ou Ponteiro inteligente
/*
    Smart pointer funciona como um ponteiro normal, mas garante que se caso o objeto não estiver sendo utilizado,
    a memória alocada para aquele objeto será liberada.

    Ponteiro unique_ptr não pode ser compartilhado por ser um ponteiro único, para isso utilize o shared_ptr.
*/

#include <iostream>
#include <memory>

class Carro{
    public:
        int vel = 0;
        int getVel(){
            return vel;
        }
        void setVel(int v){
            this->vel = v;
        }
};

using namespace std;

int main(){

    unique_ptr<int> pnum(new int(10));
    unique_ptr<string> str(new string("CFB Cursos"));
    unique_ptr<Carro> c1(new Carro);
    shared_ptr<Carro> c2(new Carro);
    shared_ptr<Carro> c3 = c2;

    c2->setVel(10);
    c3->setVel(5); 

    cout << *pnum << " - " << &pnum << endl << endl;
    cout << *str << " - Tamanho: " << str->size() << endl << endl;
    cout << "Velocidade: " << c1->getVel() << endl << endl;
    cout << "Velocidade: " << c2->getVel() << endl << endl;
    cout << "Velocidade: " << c3->getVel() << endl << endl;    

    return 0;
}