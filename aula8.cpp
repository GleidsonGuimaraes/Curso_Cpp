// Invertendo valores de variáveis

#include <iostream>

using namespace std;

int main(){

    int num = 10;
    int num1 = num * -1; // Inversão de variáveis na forma convencional

    cout << num << "\n\n";
    cout << -num << "\n\n"; // Invertendo dessa maneira, a variável não armazena o valor
    cout << num1 << "\n\n";

    num =- num; // Inversão de valores resumida

    cout << num << "\n\n";

    return 0;
}