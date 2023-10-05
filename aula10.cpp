// Comando IF ELSE e comando Goto - parte 2

#include <iostream>
#include <cstdlib> // biblioteca para a utilização do comando system("cls") || pode ser utilizada também a biblioteca <stdlib.h>

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio: // label de marcação para a utilização do comando goto
    system("cls"); // comando para apagar a tela do programa sempre que ele iniciar

    cout  << "\nDigite o valor da nota 1: ";
    cin >> n1;
    cout << "\nDigite o valor da nota 2: ";
    cin >> n2;
    cout << "\n\n";

    res = n1 + n2;

    if(res >= 60){
        cout << "Aluno aprovado!\n\n";
    }else if(res >= 40){
        cout << "Aluno em recuperacao!\n\n";
    }else{
        cout << "Aluno reprovado!\n\n";
    }

    cout << "Digitar outras notas?[s/n]: ";
    cin >> opc;
    cout << "\n\n";

    if(opc == 's' || opc == 'S'){
        goto inicio; // comando goto utilizando o marcador "inicio" para rodar o programa novamente
    }

    return 0;
}