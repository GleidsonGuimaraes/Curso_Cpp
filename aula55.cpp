// Inicialização uniforme
/*
    Recurso adicionado no C++ 11
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
    public:
        int tipo;
        string nome;
};

int main(){

    int num = 10; // inicializando uma variável da forma antiga
    int num1{10}; // inicializando uma varivável de acordo com a inicialização uniforme
    int vetor[]{1,2,3,4,5,6,7,8,9};
    string nome{"Gleidson"};
    vector<int>valores{1,2,3,4,5};
    map<string,string>capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Gleidson", 31};

    Veiculo v1{1, "Carango"}; // Para classes o uso da inicialização uniforme dispensa o uso de um método construtor

    cout << num << " - " << num1 << endl << endl << vetor[3] << endl << endl;

    for(vector<int>::iterator it = valores.begin(); it != valores.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    for(map<string,string>::iterator it1 = capitais.begin(); it1 != capitais.end(); it1++){
        cout << it1->first << " - " << it1->second << endl;
    }
    cout << endl;

    cout << p1.nome << endl << p1.idade << endl << endl << v1.nome << endl << v1.tipo << endl;

    return 0;
}