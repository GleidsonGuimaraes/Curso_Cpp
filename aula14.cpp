// Comando de laço while

#include <iostream>

using namespace std;

int main(){

    int n;

    n = 0; // inicializar a variável da expressão do comando while
    while (n < 10) 
    {
        cout << n << "\n";
        n++; // condição de parada do comando para evitar loop infinito
    }
    

    return 0;
}