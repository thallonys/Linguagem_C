#include <stdio.h>
#include <stdlib.h>

// Aula 197: Alocação dinâmica de memória coma função malloc.
// Retorna um ponteiro para a região de memória alocada ou NULL.

int main() {

    // malloc retorna um ponteiro. Por isso, a variável tem que ser um pontiero
    int *x;

    x = malloc(sizeof(int));
    // o malloc aloca uma quantidade de memória.
    // Porém, se a quantidade de memória não for especifica, então, é usado o sizeof.
    // Sizeof seleciona o tamanho de memória por meio de seu parametro 

    // Verificar alocação

    if(x) {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    } else {
        printf("Erro ao alocar memoria!\n");
    }
    return 0;
}