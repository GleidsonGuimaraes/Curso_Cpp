// Array / Vetor

#include <iostream>

using namespace std;

int main(){

    system("cls");

    int vetor[5];
    vetor[0] = 10, vetor[1] = 20, vetor[2] = 30, vetor[3] = 40, vetor[4] = 50;

    for(int i=0; i<sizeof(vetor)/4; i++){
        cout << vetor[i] << "\n";
    }

    // A função sizeof() retorna o tamanho do tipo da variavel (Atenção ao utilizar esse comando para indicar tamanho de array)
    // sizeof(vetor)/4 A variavel do tipo int possui um tamanho de 4 bytes para cada espaço utilizado

    return 0;
}