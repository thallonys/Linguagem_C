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

int main() {
    Pessoa pessoa1;
    
    printf("Digite seu nome: ");
    // fgets
    // stdin
    fgets(pessoa1.nome, 100, stdin);
    
    printf("Digite sua idade: ");
    scanf("%d%*c", &pessoa1.idade);

    printf("Digite f ou m para o sexo: ");
    scanf("%c%*c", &pessoa1.sexo);

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade,pessoa1.sexo);

    return 0;
}