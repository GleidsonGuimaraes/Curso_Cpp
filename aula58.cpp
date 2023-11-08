// for com base em intervalo (for-range-declaration)
/*
    Quando o elemento não for uma coleção, ou seja, não pode ser iterado, o for com base em intervalo não funciona.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int x[] {0,1,2,3,4,5,6,7,8,9};
    vector<int>n{10,20,30,40,50,60,70,80,90,100};
    
    // const char* nome{"Gleidson"}; // Outras formas de declarar uma string
    string nome{"Gleidson"}; // É necessario que a classe string seja declarada para que o método length() funcione no for

    for(int i:x){ // for-range-declaration
        cout << i << endl;
    }
    cout << endl;

    for(auto i:n){
        cout << i << endl;
    }
    cout << endl;

    // Para percorrer elementos não iteráveis utiliza-se o for tradicional
    for(int i=0; i<nome.length(); i++){
        cout << nome[i] << endl;
    }

    return 0;
}