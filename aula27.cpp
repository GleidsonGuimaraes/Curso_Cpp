// Enum
/*
    * Uma enumeração fornece o contexto para descrever um intervalo de valores que são representados como constantes nomeadas. 
    *  Cada nome em uma enumeração recebe um valor integral que corresponde ao seu local na ordem dos valores na enumeração.
    * Por padrão, o primeiro valor é atribuído a 0, o seguinte é atribuído a 1, e assim por diante, mas você pode definir explicitamente o valor de um enumerador.
    * Os enumeradores subsequentes, se não recebem um valor explícito, recebem o valor do enumerador anterior mais um.

    * Consulte a documentação em: https://learn.microsoft.com/pt-br/cpp/cpp/enumerations-cpp?view=msvc-170
*/

#include <iostream>

using namespace std;

int main(){

    enum armas{fuzil=10, revolver=15, rifle, escopeta};
    armas armaSelecionada; // declarando um enum
    armas armaSelecionada1 = revolver;
    armas armaSelecionada2 = rifle;

    armaSelecionada = fuzil; // atribuindo um valor constante já presente no tipo enum criado
    
    cout << armaSelecionada << "\n" << armaSelecionada1 << "\n" << armaSelecionada2 << "\n";

    return 0;
}