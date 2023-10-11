// Array bidimensional / Matriz

#include <iostream>

using namespace std;

int main(){

    int linha = 3, coluna = 4, matriz[linha][coluna];

    // loop uilizado para preencher a matriz
    for(int i=0; i<linha; i++){
        for(int x=0; x<coluna; x++){
            matriz[i][x] = ((x+1)*10)*(i+1);
        }
    }

    // loop utilizado para exibir os valores da matriz
    for(int i=0; i<linha; i++){
        for(int x=0; x<coluna; x++){
            cout << "O valor da posiçao da matriz [" << i << "] [" << x << "] e: " << matriz[i][x] << "\n";
        }
    }

    return 0;
}