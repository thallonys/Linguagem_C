#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Exercício 2

Escreva um procedimento que troca os valores dos parâmetros recebidos.
Sua assinatura deve ser: void troca(float *a, float *b);

*/

void trocar(float *a, float *b) {
    // AUX1 recebe *A;
    // AUX2 recebe *B
    // *B recebe AUX1;
    // *A recebe AUX2;

    float aux1 = *a;
    float aux2 = *b;
    
    *b = aux1;
    *a = aux2;
}

int main() {

    srand(time(NULL));
    
    float A, B;

    A = rand() % 10;
    B = rand() % 100;

    printf("Valor de A: %.2f\n", A);
    printf("Valor de B: %.2f\n", B);

    trocar(&A, &B);

    printf("\n\nValor de A: %.2f\n", A);
    printf("Valor de B: %.2f\n", B);


    return 0;
}