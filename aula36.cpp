// Ponteiros - parte 1
/*
    Ponteiros armazenam o endereço de outra variável
    O ponteiro tem que ser declarado com o mesmo tipo da variável que ele aponta
    Para declarar um ponteiro utiliza-se o operador *(asterisco) antes do nome. Sintaxe: <tipo> <*><nome>;
    Para passar um endereço de outra variável para o ponteiro utiliza-se o operador &(E comercial).
*/

#include <iostream>

using namespace std;

int main(){

    string veiculo = "Carro";
    string *endVeiculo = &veiculo; // declarando um ponteiro e armazenando o endereço de outra variavel

    system("cls");

    cout << "Endereco da variavel veiculo: " << endVeiculo << "\n";
    cout << "Valor da variavel veiculo: " << *endVeiculo << "\n";

    *endVeiculo = "Moto";

    cout << "Valor da variavel veiculo alterada: " << *endVeiculo << "\n";

    return 0;
}