/*
Criação de novos tipos de dados
Para facilitar a logica e a escrita
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct cria tipos de dados
typedef struct{
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};

int main() {
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa1.idade = 35;
    pessoa1.sexo = 'F';
    strcpy(pessoa1.nome,"Maria");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade,pessoa1.sexo);

    return 0;
}