// Operadores lógicos And, Or, Not
// And = && = E
// Or = || = Ou
// Not = ! = Negação

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    system("cls");

    int num;

    cout << "\nDigite um numero de 1 a 20: ";
    cin >> num;

    if((num > 4 && num < 7) || (num > 14 && num < 17)){
        cout << "\nValor aceito.\n\n";
    }else{
        cout << "\nNao aceito.\n\n";
    }

    if(!(num > 10)){ // O operador de negação faz a inversão da condicional
        cout << "O valor digitado e: " << num << "\n\n";
    }else{
        cout << "O valor nao pode ser exibido.\n\n";
    }

    return 0;
}