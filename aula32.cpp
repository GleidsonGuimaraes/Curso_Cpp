// Estrutura de dados Lista - Parte 1

#include <iostream>
#include <list> // biblioteca para trabalhar com a estrutura de dados Lista

using namespace std;

int main(){

    // Alguns métods utilizados aqui são semelhantes aos das estruturas pilha e fila.

    list <int> aula, teste;
    int tam;
    list <int>::iterator it;

    teste.push_front(11);
    teste.push_front(11);
    teste.push_front(11);
    teste.push_front(11);

    tam = 10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.erase(--it); // remove o elemento indicado na posição pelo iterator

    // aula.clear(); // limpa toda a lista
    aula.merge(teste); // adiciona os elementos de uma lista à outra. OBS: a lista "teste" ficará vazia após o uso do método

    cout << "Tamanho da Lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}