// Pilha || Stack - Parte 1
// A pilha segue o padrão LIFO - Last in, first out (Último a entrar é o primeiro a sair)

#include <iostream>
#include <stack> // Biblioteca para trabalhar com pilhas

using namespace std;

int main(){

    // criando uma pilha
    stack <string> cartas;

    cartas.push("Rei de Copas"); // 1
    cartas.push("Rei de Espadas"); // 2
    cartas.push("Rei de Ouro"); // 3
    cartas.push("Rei de Paus"); // 4

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cartas.pop(); // remove o elemento que está no topo da pilha

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Tamanho da pilha: " << cartas.top() << "\n";  // O método .top() retorna o elemento que está no topo da pilha

    return 0;
}