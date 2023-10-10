// Comando de loop For

#include <iostream>

using namespace std;

int main(){

    int cont;

    for(int temp = 0; temp < 1000000000; temp++); // for sem corpo utilizado como temporizador, não muito utilizado nos dias atuais

    for(int i=0, x=10; i<10; i++, x+=2){ // podem ser declaradas mais de uma variável dentro da expressão condicional
        cont = i;
        cout << "O valor da variavel cont e: " << cont << " - ";
        cout << "O valor da variavel x e: " << x << "\n";
    }

    return 0;
}