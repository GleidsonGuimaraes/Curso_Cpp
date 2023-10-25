// Mais sobre printf e cout

#include <iostream>
#include <stdio.h>
#include <math.h> // biblioteca matemática
#include <iomanip> // para a função setbase()

using namespace std;

int main(){

    float pi = M_PI;
    float num = M_PI;
    int num1 = 10;

    printf("Valor de PI: %.2f\n", pi); // definindo quantos digitos depois do ponto
    printf("Valor de num: %07.2f\n\n", num); // definindo o digito utilizado para preencher um valor real e a quantidade de digitos total (%07). Pode ser utilizado com numeros inteiros

    cout << "Valor de num1 em decimal: " << num1 << "\n";
    cout << "Valor de num1 em hexadecimal: " << hex << num1 << "\n";
    cout << "Valor de num1 em octadecimal: " << oct << num1 << "\n";
    cout << "Valor de num1 em hex: " << setbase(16) << num1 << "\n"; // utilizando uma função diferente para converter

    cout.precision(3); // define a quantidade de casas decimais a partir do ponto
    cout << "Valor de PI: " << pi << "\n";
    
    cout.precision(-1); // reseta a precisão do cout para o padrão
    cout << "Valor de PI: " << std::scientific << pi << "\n"; // notação cientifica de PI

    cout << "Valor de num1:" << dec << setw(10) << setfill('-') << num1 << "\n"; // formatando a largura do texto e os espaços vazios com o caracter indicado na função

    return 0;
}