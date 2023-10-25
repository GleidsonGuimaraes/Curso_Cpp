// printf e scanf - comandos utilizados na linguagem C
/*
    Para fazer a leitura ou escrita em variaveis em C é necessario passar alguns caracteres referenciadores
    de tipo de variavel. Para leitura é necessário passar o operador de endereço(&) antes do nome da variavel.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    char nome[20];

    printf("Canal Fessor Bruno\nCurso de C++\n"); // comando de escrita em C
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome); // comando de leitura em C
    printf("\nSeu nome e %s.\n", nome);

    return 0;
}