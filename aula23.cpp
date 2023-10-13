// Sobrecarga de funções
// É a possibilidade de trabalhar com mais de uma função com o mesmo nome, porém, elas devem ter argumentos diferentes

#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);

int main(){

    system("cls");
    cout << "\n";

    soma();
    soma(20, 40);

    return 0;
}

// exemplos de sobrecarga de funções

void soma(int n1, int n2){ // mesmo nome COM argumentos
    cout << "Soma de " << n1 << " com " << n2 << " e: " << n1+n2 << ".\n\n";
}

void soma(){ // mesmo nome SEM argumentos
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    
    cout << "Soma de " << n1 << " com " << n2 << " = " << re << ".\n\n";
}