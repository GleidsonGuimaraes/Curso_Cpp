// Vector

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> num; // declarando um vector com alocação dinamica de espaço
    vector<int> num2;
    int tam, tam2, i;

    num.push_back(1); // insere valores no final do vector
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    num.insert(num.begin()+1, 0); // insere um elemento na posição indicada
    num.insert(num.end(), 10);
    num.erase(num.end()-1); // remove um elemento na posição indicada

    tam = num.size(); // retorna o tamanho do vector
    tam2 = num2.size();

    cout << "Primeiro elemento de num: " << num.front() << endl;
    cout << "Ultimo elemento de num:   " << num.back() << endl;
    cout << "Elemento do meio:         " << num.at(tam/2) << endl;

    // num.swap(num2); // troca os elementos entre os vectors


    cout << "Tamanho do vector num: " << tam << endl;
    cout << "Tamanho do vector num2: " << tam2 << endl;

    for(i=0; i<tam; i++){
        cout << num[i] << " ";
    }

    cout << endl;

    for(i=0; i<tam2; i++){
        cout << num2[i] << " ";
    }

    cout << endl;

    // num2.clear(); // esvazia todo o vector

    while(!num.empty()){
        num.pop_back(); // remove os elementos no final do vector
    }

    cout << "Novo tamanho do vector num: " << num.size() << endl;

    return 0;
}