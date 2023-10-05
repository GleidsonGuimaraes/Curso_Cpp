// Comando de decisão IF ELSE - parte 1

#include <iostream>

using namespace std;

int main(){

    string res;
    int sol; // Variáveis do tipo int podem ser usadas para comparativos booleanos caso o valor dela seja 0 ou 1
             // Os valores booleanos true ou false equivalem aos valores 1 ou 0, respectivamente

    cout << "O dia hoje esta com sol? \nDigite sim ou não: \n";
    cin >> res;
    cout << "\n\n";

    if(res == "sim" || res == "Sim" || res == "SIM"){
        sol = 1;
        cout << "Vou ao clube.\n\n";
    }else{
        sol = 0;
        cout << "Vou ao cinema.\n\n";
    }

    if(sol){ // O sinal ! adicionado antes da condicional é usado para inverter seu valor
        cout << "Sairei as 6h para chegar bem cedo ao clube. \n\n";
    }else{
        cout << "Vou conferir quais filmes estao em cartaz para escolher qual irei assistir. \n\n";
    }

    return 0;
}