// Operações com arquivos (ofstream) - Parte 1
/*
    ofstream - envia os dados do programa para o arquivo criado
    ifstream - envia os dados do arquivo para o programa
    fstream - envia e/ou busca os dados do arquivo

    Para adicionar conteudo de texto no arquivo sem sobrescrever o anterior, adicione o comando ios::app
    que fará com que o cursor seja posicionado no final do arquivo e adicione o texto após o conteúdo já presente
    no arquivo.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arquivo; // variavel para o arquivo do tipo ofstream

    arquivo.open("aula50.txt"); // metodo open() para a criação do arquivo 

    arquivo << "CFB Cursos\n"; // adicionando texto ao arquivo
    arquivo << "Curso de C++\n";
    arquivo << "cfbcursos.com.br\n";
    arquivo << "youtube.com/cfbcursos\n";

    arquivo.close(); // é bom sempre fechar o arquivo ao final da sua utilização

    return 0;
}