// Estrutura de dados Lista - Parte 1

#include <iostream>
#include <list> // biblioteca para trabalhar com a estrutura de dados Lista

using namespace std;

int main(){

    // Os métods utilizados aqui são semelhantes aos das estruturas pilha e fila.

    list <int> aula;
    int tam;
    list <int>::iterator it;

    tam = 10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it = aula.begin(); // indicando a primeira posição para o it com o método begin()
    advance(it,5); // avançando a posição do iterator
    
    aula.insert(it,10); // Inserindo o valor 0 na posição passada para o interator it

    cout << "Tamanho da Lista: " << aula.size() << "\n\n";

    aula.sort(); // Ordena em ordem crescente os valores da lista eliminando os repetidos
    aula.reverse(); // Inverte a ordem dos dados da lista

    tam = aula.size();
    for(int i=0; i<tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}