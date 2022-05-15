/*
Criação de novos tipos de dados
Para facilitar a logica e a escrita
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
  char tipo[100];
  char marca[50];
  char modelo[25];
  char energia;
  char descricao[500];
  int quantidade;
  int codigo;
} Eletronico; 

void imprimirEletronico(Eletronico e) {
    // Devido ao uso da função fgets(variável, tamanho, comando de entrada (stdin)), não é necessário usar \n no printf porque
    // a funçao fgets lê o ENTER e o aplica. Causando assim, uma quebra de linha.
    printf("\tTipo: %s", e.tipo);
    printf("\tMarca: %s", e.marca);
    printf("\tModelo: %s", e.modelo);
    printf("\tEnergia: %c\tQuantidade: %d\n", e.energia, e.quantidade);
    printf("\tDescricao: %s", e.descricao);
}

Eletronico lerEletronico() {
    Eletronico e;

    printf("Digite o tipo: ");
    fgets(e.tipo, 100, stdin);
    
    printf("Marca: ");
    fgets(e.marca, 50, stdin);

    printf("Modelo: ");
    fgets(e.modelo, 25, stdin);

    printf("Eficiencia energetica: ");
    scanf("%c%*c", &e.energia);

    printf("Descricao: ");
    fgets(e.descricao, 500, stdin);

    printf("Quantidade e codigo: ");
    scanf("%d%*c%d%*c", &e.quantidade, &e.codigo);
    
    return e;

}

int main() {
   Eletronico ele;

   ele = lerEletronico();
   imprimirEletronico(ele);

    return 0;
}