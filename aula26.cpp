// Resolução de exercícios da aula 25
// Crie uma função recursiva que represente uma sequencia fatorial
// Crie uma função recursiva que represente uma sequencia fibonacci

#include <iostream>

using namespace std;

void fatorial(int num, int res);
void fibonacci(int qt, int x=0, int y=1);

int main(){

    int valorDoUsuario;

    cout << "Digite um valor entre 1 e 20: ";
    cin >> valorDoUsuario;
    cout << "\nFatorial de " << valorDoUsuario << ":\n\n";
    fatorial(valorDoUsuario, valorDoUsuario);

    cout << "\nFibonacci de " << valorDoUsuario << ":\n\n";
    fibonacci(valorDoUsuario);

    cout << "\n\n";

    return 0;
}

void fatorial(int num, int res){
    cout << num;
    if(num > 1){
        cout << " * ";
        res = res * (num - 1);
        fatorial(--num, res);
    }else{
        cout << " = " << res << "\n";
    }
}

void fibonacci(int qt, int x, int y){
    cout << x << " + " << y;
    x = x + y;
    y = y + x;
    if(qt > 0){
        cout << " + ";
        fibonacci(--qt, x, y);
    }
}