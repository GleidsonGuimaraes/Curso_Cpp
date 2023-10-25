// Ponteiros - parte 3
/*
    Ponteiros na função
    Quando for passar variaveis como parâmetros da função é necessário utilizar ponteiros.
*/

#include <iostream>

using namespace std;

void somar(float *var, float valor);
void iniVetor(float *v);

int main(){

    system("cls");

    float num = 0; // Variável de escopo local
    float vetor[5];

    somar(&num, 15); // Variavel de escopo local pode ser acessada pelo seu endereço na função, por isso a utilização de ponteiro na função
    iniVetor(vetor); // Vetores não necessitam do & para passar seu endereço para o ponteiro

    cout << num << "\n\n";

    for(int i = 0; i < 5; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

void somar(float *var, float valor){
    *var += valor;
}

void iniVetor(float *v){
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
}