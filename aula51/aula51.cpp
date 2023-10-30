// Operações com arquivos (ifstream) - Parte 2
/*
    ofstream - envia os dados do programa para o arquivo criado
    ifstream - envia os dados do arquivo para o programa
    fstream - envia e/ou busca os dados do arquivo
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arquivoS; // objeto do tipo ofstream permite fazer a gravação no arquivo

    arquivoS.open("aula51.txt");

    arquivoS << "CFB Cursos\n";
    arquivoS << "Curso de C++\n";
    arquivoS << "cfbcursos.com.br\n";
    arquivoS << "youtube.com/cfbcursos\n";

    arquivoS.close();

    ifstream arquivoE; // objeto do tipo ifstream permite fazer a leitura do arquivo
    string linha; // variavel para armazenar a linha lida e exibir na tela
    arquivoE.open("aula51.txt"); // abrindo o arquivo no ifstream

    if(arquivoE.is_open()){ // comando para verificar se o arquivo foi aberto
        while(getline(arquivoE, linha)){ // comando para verificar e buscar o conteúdo linha por linha do arquivo
            cout << linha << endl;
        }
        arquivoE.close();
    }else{
        cout << "Não foi possivel abrir o arquivo.\n";
    }

    return 0;
}