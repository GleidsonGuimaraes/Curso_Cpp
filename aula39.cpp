// Alocação dinâmica de memória
/*
    Se for passado para um array a quantidade de elementos maior do que foi declarado, um erro pode ser gerado
    porque ele vai ocupar um espaço na memoria para armazenar esses elementos que não foi reservado para ele. 
    Esse espaço pode estar sendo utilizado por outra variavel do programa ou pelo próprio sistema operacional.
*/

#include <iostream>
#include <stdio.h> // para a função gets
#include <stdlib.h> // para a função malloc (alocação dinâmica de memória)

using namespace std;

int main(){

    // char vnome[5]; // teste para a variavel com pouca reserva de espaço na memoria
    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    cout << "Nome: ";
    // cin >> vnome; // Gera um erro, pois o array não recebe espaço caso seja digitado
    gets (vnome);

    cout << vnome;

    return 0;
}