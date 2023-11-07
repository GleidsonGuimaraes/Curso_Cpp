// Classes de armazenamento (extern)
/*
    A classe "extern" permite que a gente acesse uma variável que esteja em um arquivo externo.

    Posso utilizar um arquivo .h para declarar uma variável em arquivo externo também
*/

#include <iostream>
#include "auxiliar.cpp" // Por não utilizar o codeblocks, tive que incluir o arquivo no cabeçalho

using namespace std;

void impNum();

int num{50};
extern int valor;

int main(){

    impNum();
    cout << valor << endl;

    return 0;
}