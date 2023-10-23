// Ponteiros - parte 2
/*
    Quando trabalhamos com arrays e ponteiros, o ponteiro armazena o primeiro endereço do array e a propria 
    linguagem fica responsável por incrementar a quantidade de bytes necessários para indicar próxima posição
    do array de acordo com o tipo declarado ao ponteiro.
*/

#include <iostream>

using namespace std;

int main(){

    system("cls");

    int *p; 
    int vetor[10];

    p = &vetor[0]; // p = vetor; (Ambas às formas passam o endereço da primeira posição do array para o ponteiro)
    
    for(int i=0; i<10; i++){
        p++; // OBS: o incremento funcionou sem a utilização do operador * para indicar o ponteiro
        *p = i;
        cout << p << " = " << *p << "\n";
    }

    return 0;
}