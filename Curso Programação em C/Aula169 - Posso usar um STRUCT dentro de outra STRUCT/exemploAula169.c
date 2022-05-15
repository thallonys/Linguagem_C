/*
Criação de novos tipos de dados
Para facilitar a logica e a escrita
*/

// Aula 169: Struct de struct
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
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

int main() {
    Pessoa pessoa;
    
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

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade,pessoa.sexo);
    printf("Data de nascimento: %d/%d/%d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}