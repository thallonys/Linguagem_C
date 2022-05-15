/*
Criação de novos tipos de dados
Para facilitar a logica e a escrita
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct cria tipos de dados
typedef struct{
    int dia, mes, ano;
} DataNas;

typedef struct{
    // Esse struct DataNas deve ser declarado antes de Pessoa
    DataNas dataNas;
    // int ocupa 4 bytes
    int idade;
    // char ocupa 1 byte
    char sexo;
    // chgar vetor ocupa 100, no caso.
    char nome[100];
} Pessoa; // Logo, o Tipo pessoa ocupa 105 bytes + 3 bytes de espaço necessário para geranciar o struct porque tem componentes de memória distintos.

void imprimirPessoa(Pessoa p) {
    printf("\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

Pessoa lerPessoa() {
    Pessoa pessoa;
    printf("\n\nDigite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d%*c", &pessoa.idade);
    printf("Digite f ou m para o sexo: ");
    scanf("%c%*c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%*c%d%*c%d%*c", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade,pessoa.sexo);
    printf("Data de nascimento: %d/%d/%d", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);
    return pessoa;

}

int main() {
    int i;
    Pessoa pessoas[10];

    for(i = 0; i < 3; i++)
        pessoas[0] = lerPessoa();

    for(i = 0; i < 3; i++)
        imprimirPessoa(pessoas[i]);

    // sizeof serve para descobrir o quanto de memória uma variável ocupa
    // printf("%d\n", sizeof(pessoa));

    return 0;
}