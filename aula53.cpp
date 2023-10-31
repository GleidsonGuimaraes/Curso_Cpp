// Iterator
/*
    É uma estrutura que permite navegar entre os itens de uma coleção
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string>produtos = {"mouse","teclado","monitor","gabinete","cx.som"};
    // vector<string>::iterator it; // declarando um iterator

    // it = produtos.begin(); // recebendo o vector a partir do primeiro elemento
    // it = produtos.end()-1; // recebendo o vector a partir do último elemento

    // next - *next(variavel, indice) - utilizado diretamente no cout, avança para o elemento do indice indicado na função
    // prev - *prev(variavel, indice) - utilizado diretamente no cout, retorna para o elemento do indice indicado na função

    // advance(it, 3); // permite navegar as posições do vector pelo índice indicado

    // cout << *next(it, 1) << endl;

    for(vector<string>::iterator it=produtos.begin(); it!=produtos.end(); it++){ // declarando um iterator dentro de uma estrutura
        cout << *it << endl;
    }

    return 0;
}