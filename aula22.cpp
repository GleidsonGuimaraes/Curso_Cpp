// Funções
// Para que uma função seja chamada no main, é necessário prototipar(apresentar) a função no código

#include <iostream>

using namespace std;

void texto(); // prototipando a função || apresentando a função
void soma(int n1, int n2); // obs: não esquecer de declarar os argumentos na prototipação das funções
int soma2(int n1, int n2);
void transporte(string t[4]);

int main(){

    // limpando o prompt de comando
    system("cls");

    // variáveis
    int res = soma2(150, 50); 
    string tipoDeVeiculo[4] = {"carro","moto","aviao","barco"};

    // retorno das funções
    texto();
    soma(10, 5);

    cout << "Valor de res: " << res << "\n\n";
    cout << "Valor de soma2: " << soma2(150, 100) << "\n\n";

    transporte(tipoDeVeiculo);
    
    cout << "\n";

    return 0;
}

/*
    Sintaxe das funções

    Tipo_de_retorno_da_função Nome_da_função (Dados_recebidos_como_argumentos_para_a_função){

        Cadeia_de_comandos_da_função

        return valor_da_saída // Sempre que a função for de um tipo diferente de void, o return é obrigatório
    }
*/

void texto(){
    cout << "\nCanal Fessor Bruno - CFB Cursos\n\n";
}

void soma(int n1, int n2){
    cout << "Soma dos valores: " << n1 + n2 << "\n\n";
}

int soma2(int n1, int n2){
    return n1 + n2;
}

void transporte(string t[4]){
    for(int i=0; i<4; i++){
        cout << "Transporte: " << t[i] << "\n";
    }
}