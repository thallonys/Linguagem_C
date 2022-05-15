// Vetor é sempre um pontiero?
#include <stdio.h>
#include <stdlib.h>


void imprimir(int vet[], int tam) {
    int i;
    for(i = 0; i < tam; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

void teste(int vet[], int tam) {
    int i;
    for(i = 0; i < tam; i++)
        vet[i] = vet[i] * 2;
    printf("\n");
}


int main() {

    int vet[10] = {45,89,68,25,17,76,34,57,44};
    
    imprimir(vet, 10);

    teste(vet, 10);

    imprimir(vet, 10);

// Toda vez que um vetor for alterado, ele vai ser alterado efetivamente
// na "fonte". Que é o contrário quando se tenta alterar o valor de uma
// variável.

    return 0;
}