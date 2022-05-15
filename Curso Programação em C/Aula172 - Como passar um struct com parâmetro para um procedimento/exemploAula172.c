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
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}
int main() {
    Pessoa pessoa;
    DataNas data;

    // sizeof serve para descobrir o quanto de memória uma variável ocupa
    printf("%d\n", sizeof(pessoa));
    
    printf("Digite seu nome: ");
    // fgets
    // stdin
    fgets(pessoa.nome, 100, stdin);
    
    printf("Digite sua idade: ");
    scanf("%d%*c", &pessoa.idade);
    // Por causa da função fgets que lê até o enter ser apertado,
    // é necessário um scanf adicional para pegar esse enter digital
    // para que não seja atribuido a outra variável. 
    // scanf("%c");
    // Porém, se no scanf for utilizado o %*c, não é preciso fazer essa manobra
    // Exemplo: scanf("%d%*c", &variável)

    printf("Digite f ou m para o sexo: ");
    scanf("%c%*c", &pessoa.sexo);

    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%*c%d%*c%d%*c", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    // printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade,pessoa.sexo);
    // printf("Data de nascimento: %d/%d/%d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    imprimirPessoa(pessoa);

    return 0;
}