// Funções lambda
/*
    Funções lambda são funções anônimas que podem ser anexadas a outras funções ou variáveis.

    Sintaxe:
    [captura de variáveis](parâmetros)->tipo_retorno{
        corpo da função
    };
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x1=10, x2=5, x3=2, x4=12;

    auto soma = [x1, x2, x3, x4]()->int{ // capturando variáveis declaradas no escopo do main()
        return x1+x2+x3+x4;
    };

    auto maior=[=](vector<int>n)->int{ // o operador "=" passado na captura de variáveis, faz com que todas as variáveis do escopo sejam utilizadas
        auto m = 0;
        for(int x:n){
            m=(m>x) ? m : x;
        }
        return m+x1+x2+x3+x4;
    };

    cout << maior({6,5,8,10,25,13,11,30,28,100}) << endl << endl;

    cout << soma() << endl;

    return 0;
}