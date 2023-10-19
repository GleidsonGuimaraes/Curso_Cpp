// Fila / Queue
// A estrutura de dados Fila segue o padrão FIFO (First In, First Out) / Primeiro a entrar é o primeiro a sair

#include <iostream>
#include <queue> // biblioteca para trabalhar com a estrutura de dados fila

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeiro elemento: " << cartas.front() << "\n";
    cout << "Ultimo elemento: " << cartas.back() << "\n";

    while(!cartas.empty()){
        cout << "Primeiro elemento: " << cartas.front() << "\n";
        cartas.pop();
    }

    /*
        .empty() Verifica se a fila está vazia
        .size() Retorna o tamanho da fila
        .front() Retorna o primeiro elemento da fila
        .back() Retorna o último elemento da fila
        .push() Adiciona elementos à fila
        .pop() Retira o primeiro elemento da fila

    */

    return 0;
}