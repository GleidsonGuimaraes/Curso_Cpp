// Variáveis globais e locais, e operadores matemáticos
/*
    Variáveis globais podem ser utilizadas em todo o código.
    Variáveis locais só podem ser acessadas dentro do escopo que elas foram declaradas.
*/
/*
    Operadores matemáticos
    + Soma
    - Subtração
    / Divisão
    * Multiplicação
    % (Mod) Retorna o resto da divisão
    () Qualquer operção dentro dos parenteses tem prioridade sobre a que está fora
*/
#include <iostream>

using namespace std;

int n1, n2; // Variáveis globais

int main(){

    int n3, n4, res, res2, res3, res4; // Variáveis locais
    n1 = 11, n2 = 3, n3 = 5, n4 = 2;
    res = n1+n2+n3+n4;
    res2 = n1 + n2 * n4; // O resultado dessa operação é baseado em expressão numérica, considerando a prioridade dos operadores
    res3 = n1 % n2;
    res4 = n1 / n2;

    cout <<"\nA soma das variaveis e: " << res << "\n\n";
    cout <<"\nO resultado de res2 e: " << res2 << "\n\n";
    cout <<"\nO resto da divisao e: " << res3 << "\n\n";
    cout <<"\nO resultado da divisao e: " << res4 << "\n\n";

    return 0;
}