#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int *v, int tam) {
    for(int i = 0; i < tam; i++) {
         printf("%d ", *(v + i));
     }
     printf("\n");
}

void imprimirVetorLetras(char *v, int tam) {
    for(int i = 0; i < tam; i++) {
         printf("%c ", *(v + i));
     }
     printf("\n");
}

void preencherVetorInt(int *v, int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Digite um valor qualquer: ");
        scanf("%d", v + i);
    }
}
int main() {

    int i, vet[10] = {0,1,2,3,4,5,6,7,8,9};
    char letras[10] = {'a','b','c','d','e','f','g','h','i','j'};
    
    // printf("%p\t%p\n", vet, &vet[0]);
    preencherVetorInt(vet, 10);
    imprimirVetor(vet, 10);
    imprimirVetorLetras(letras, 10);
    // for(i = 0; i < 10; i++) {
    //     printf("%d ", *(vet + i));
    // }

    /*
    int *valor1, valor2 = 50;
    char *letra1, letra2 = 'g';

    valor1 = &valor2;

    letra1 = &letra2;

    printf("Valor da variavel valor2: %d\n", valor2);

    printf("Endereco da variavel valor2: %p\n", &valor2);

    printf("Conteudo do ponteiro valor1: %p\n", valor1);

    printf("Conteudo apontado pelo ponteiro valor1: %d\n", *valor1);

    printf("\nValor da variavel letra2: %c\n", letra2);
    printf("Endereco da variavel letra2: %p\n", &letra2);
    printf("Conteudo da variavel letra1: %p\n", letra1);
    printf("Conteudo apontado pela variavel letra1: %c\n", *letra1);

    */

    return 0;
}