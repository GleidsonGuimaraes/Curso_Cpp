// System

#include <iostream>
#include <stdlib.h> // biblioteca para utilização do comando system

using namespace std;

int main(){

    system("dir"); // executa comandos do prompt
    system("color 2f"); // execute o comando color/? para saber as opções de cores - O primeiro é cor de fundo e o segundo é a cor do texto

    cout << "Canal Fessor Bruno" << endl;
    system("pause");

    return 0;
}