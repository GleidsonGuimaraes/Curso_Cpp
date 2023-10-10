// Comando Switch Case

#include <iostream>

using namespace std;

int main(){

    inicio:

    system("cls");

    int val, val1;
    char continuar;

    cout << "\nSelecione uma cor:\n";
    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";
    cin >> val;

    switch (val){
        case 1:
            cout << "\nCor selecionada foi Verde.\n";
            break;
        case 2:
            cout << "\nCor selecionada foi Azul.\n";
            break;
        case 3:
            cout << "\nCor selecionada foi Vermelho.\n";
            break;

        default:
            cout << "\nValor invalido.\n";
            break;
    }
    
    cout << "\nSelecione uma cor:\n";
    cout << "[1, 2, 3]=Verde, [4, 5, 6]=Azul\n";
    cin >> val1;

    switch (val1){
        case 1:            
        case 2:
        case 3:
            cout << "\nCor selecionada foi Verde.\n";
            break;

        case 4:            
        case 5:
        case 6:
            cout << "\nCor selecionada foi Azul.\n";
            break;

        default:
            cout << "\nValor invalido.\n";
            break;
    }

    cout << "\nSelecione um transporte:\n";
    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";
    cin >> val;

    switch (val){
        case 1:
        case 2:
            cout << "\nTransporte Terrestre.\n";
            switch (val)
            {
            case 1:
                cout << "\nCarro selecionado.\n";
                break;
            case 2:
                cout << "\nMoto selecionada.\n";
                break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte aereo.\n";
            switch (val)
            {
            case 3:
                cout << "\nAviao selecionado.\n";
                break;
            case 1:
                cout << "\nHelicoptero selecionado.\n";
                break;
            }
            break;

        default:
            cout << "\nValor invalido.\n";
            break;
    }

    // Sintaxe
    /*
    switch(expressão){
        case const1:
            comandos;
            break;
        case const2:
            comandos;
            break;
        default:
            comandos;
    }
    */

    cout << "Deseja escolher outra cor? [s/n] ";
    cin >> continuar;

    if(continuar == 's' || continuar == 'S'){
        goto inicio;
    }

    return 0;
}