// Incremento e decremento de variáveis, operadores pós e pré-fixados

#include <iostream>

using namespace std;

int main(){

    int n1 = 5, n2 = 10, n3 = 15;

    cout << n1 << "\n" << n2 << "\n" << n3 << "\n\n";

    n1 += 1; // Incremento ou decremento de acordo com a quantidade de unidades especificada após o sinal
    n2 *= 2; // Esta forma de incremento pode ser utilizada com qualquer operador matemático

    cout << n1 << "\n" << n2 << "\n" << n3 << "\n\n";
    cout << ++n3 << "\n\n"; // No pré-fixado o programa incrementa ou decrementa 1 unidade e depois usa o valor
    cout << n3-- << "\n\n"; // No pós-fixado o programa usa o valor e depois incrementa ou decrementa 1 unidade

    return 0;
}