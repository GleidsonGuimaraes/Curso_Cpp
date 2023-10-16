// Pilha || Stack - Parte 2
// A pilha segue o padrão LIFO - Last in, first out (Último a entrar é o primeiro a sair)

#include <iostream>
#include <stack> // Biblioteca para trabalhar com pilhas

using namespace std;

int main(){

    // criando uma pilha
    stack <string> cartas;
    
    (cartas.empty()) ? cout << "Pilha vazia.\n" : cout << "Pilha com cartas.\n"; // o método .empty() verifica se a pilha está vazia

    // o método .push() adiciona elementos na pilha
    cartas.push("Rei de Copas"); // 1
    cartas.push("Rei de Espadas"); // 2
    cartas.push("Rei de Ouro"); // 3
    cartas.push("Rei de Paus"); // 4

    cout << "Tamanho da pilha: " << cartas.size() << "\n"; // o método .size() retorna a quantidade de elementos em uma pilha

    cartas.pop(); // remove o elemento que está no topo da pilha

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Tamanho da pilha: " << cartas.top() << "\n\n";  // O método .top() retorna o elemento que está no topo da pilha

    while(!cartas.empty()){ // exemplo de como pode ser usado o método empty()
        cout << "Carta do topo: " << cartas.top() << "\n";
        cartas.pop();
    }

    return 0;
}