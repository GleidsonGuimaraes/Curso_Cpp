// Tratamentos de erros com try catch

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double dividir(double n1, double n2);

int main(){

    /*
    vector <int> num(5);

    try{ // passe o código a ser tratado caso gere erro
        num.at(5) = 10;
        cout << num[5] << endl;        
    }catch(exception& e){ // tratamento do erro
        cout << "ERRO:" << e.what() << endl;
    }
    */
    
    double num1, num2;

    cin >> num1 >> num2;

    try{
        cout << dividir(num1, num2);
    }catch(const char* e){
        cout << "ERRO: " << e << endl;
    }

    return 0;
}

double dividir(double n1, double n2){
    if(n2==0){
        throw "Erro de divisao por Zero"; // gerando uma mensagem de erro para uma determinada condição
    }
    if(n1 > 50){
        throw "N1 nao pode ser maior que 50.";
    }
    return n1/n2;
}