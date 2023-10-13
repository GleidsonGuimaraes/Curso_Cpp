// Omissão de argumentos e argumentos padrão
// Para omitir um argumento, devemos passar um valor padrão no protótipo da função

#include <iostream>

using namespace std;

// protótipo da função
void imp(string txt = "");

int main(){

    system("cls");
    cout << "\n";
    
    // chamando a função
    imp(); // Omitindo o argumento
    imp("Youtube"); // O valor utilizado como argumento será sempre o declarado na chamada da função

    return 0;
}

void imp(string txt){
    cout << txt << "\n\n";
}
