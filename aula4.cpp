// Variáveis em C++

#include <iostream>

using namespace std;

int main(){

    int numInteiro = 0; // recebe números inteiros
    char letra = 'B'; // declarada entre aspas simples 'B'
    double decimal = 5.2; // decimal com maior precisão ex: 2.4999999
    float decimal2 = 5.3; // decimal com menor precisão ex: 2.5
    bool verdadeiroFalso = true; // recebe um valor booleano true ou false
    string nome = "Bruno"; // declarada entre aspas duplas "Bruno"

    cout << "Digite o numero de vidas: ";
    cin >> numInteiro; // comando para receber dados do teclado
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite um nome: ";
    cin >> nome;

    cout << numInteiro << "\n" << letra << "\n" << decimal << "\n" << verdadeiroFalso << "\n" << nome << "\n";

    return 0;
}