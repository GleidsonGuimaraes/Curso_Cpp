// Argumentos para a função main, argc e argv
/*
    O parâmetro argc é do tipo inteiro e armazena a quantidade de argumentos passados para a função

    O parâmetro argv é do tipo caracter e armazena os argumentos passados para a função.
    Obs: O argv é declarado como um ponteiro para uma matriz de ponteiros.
    Por padrão o primeiro argumento, mesmo que não seja informado, é o nome do programa.

    Declare os parâmetros diretamente no prompt de comando para testar o programa. Segue o comando abaixo:
    D:\Backup\Cursos\Cfb_cursos\C++\Curso_Cpp\output\aula21.exe youtube canal Bruno Gleidson

    É possível, também, passar um argumento para o programa, criando um atalho do arquivo executável, depois vá até
    propriedades desse atalho e na guia Destino, adicione o argumento após o endereço do arquivo.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){

    if(argc > 1) {
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube. \n\n";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema. \n\n";
        }else{
            cout << "Vou ficar em casa. \n\n";
        }
    }

    // cout << argv[3] << "\n";
    // cout << argc << "\n";

    system("pause");
    return 0;
}