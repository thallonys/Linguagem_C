#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc retorna um ponteiro. Por isso, a variável tem que ser um pontiero
    char *x;

    // x = malloc(sizeof(int));
    // O malloc rece somente a quantidade de memória em bytes
    // o malloc aloca uma quantidade de memória.
    // Porém, se a quantidade de memória não for especifica, então, é usado o sizeof.
    // Sizeof seleciona o tamanho de memória por meio de seu parametro 

    x = calloc(1, sizeof(char));
    // O calloc recebe dois parêmetros: a quantidade de elemntos e a quantidade de memória em bytes.

    // Verificar alocação

    if(x) {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    } else {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}