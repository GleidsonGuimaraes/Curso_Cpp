// Operador ternário (?)
/*
    O operador if ternário, ternário ou condicional ternário é um if simplificado para ser utilizado em operações mais simples.
    Por ser mais simples, ele possui uma velocidade de execução maior, porém, o retorno também é simplificado.
*/

#include <iostream>

using namespace std;

int main(){

    // (expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res, res1, res2;

    cout << "\nDigite a primeira nota: ";
    cin >> n1;
    cout << "\nDigite a segunda nota: ";
    cin >> n2;
    cout << "\n\n";

    nota = n1 + n2;
    // No caso abaixo, a variável recebe o valor retornado pelo operador ternário
    res = (nota >= 60) ? "Aprovado!\n\n" : "Reprovado!\n\n"; // If ternário
    // res1 = "Aprovado!\n\n";
    // res2 = "Reprovado!\n\n";

    // (nota >= 60) ? cout << res1 : cout << res2; // If ternário

    cout << res;

    return 0;
}