// Operações com arquivos (fstream) - Parte 3
/*
    ofstream - faz a gravação de conteúdo de texto no arquivo
    ifstream - faz a leitura do conteúdo do arquivo
    fstream - grava e le o conteúdo do arquivo tudo em uma única classe
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("aula52.txt", ios::out); // ios::out - utilizado para adicionar conteúdo no arquivo sobrescrevendo outro conteúdo
    // adicione (...|ios::app) para adicionar conteúdo no arquivo sem sobrescrever o antigo
    
    while((opc=='s') || (opc=='S')){
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "\nDigitar um novo nome?[s/n]";
        cin >> opc;
        system("cls");
    }
    arquivo.close();

    arquivo.open("aula52.txt", ios::in); // ios::in - utilizado para ler o conteúdo do arquivo

    cout << "Nomes digitados.\n";

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout << linha << endl;
        }
        arquivo.close();
    }else{
        cout << "Nao foi possivel abrir o arquivo.\n";
    }

    return 0;
}