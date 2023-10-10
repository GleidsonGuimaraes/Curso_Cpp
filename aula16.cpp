// Comando de loop Do While
/*
    O comando Do While executa o bloco de comandos primeiro e só no final ele verifica a condicional no final,
    com isso, ele garante que os comandos sejam executados pelo menos 1 vez antes de sair do loop.
*/

#include <iostream>

using namespace std;

int main(){

    int cont;

    cont = 20;
    do{
        cout << cont << "\n";
        cont++;
    }while (cont < 20);

    cout << "\nRotina Finalizada.\n";
    
    return 0;
}