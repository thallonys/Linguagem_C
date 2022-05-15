#include <stdio.h>
#include <stdlib.h>

int main() {

    char palavra[100];

    // Ler uma sequência de caracteres até teclar ENTER
    // scanf("%100[^\n]", palavra);

    // Exibe o que foi digitado
    // printf("%s\n", palavra);

    // Aqui é mostrado que o endereço de memória do vetor
    // é sempre o mesmo para os diferentes modos de exibir
    // esse endereço de memória.
    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);


    return 0;
}