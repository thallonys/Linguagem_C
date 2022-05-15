#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vet1, *vet2;

    vet1 = malloc(10 * sizeof(int));
    vet2 = calloc(10, sizeof(int));

    // Malloc faz a alocação de memória e não as inicializa com 0
    printf("\nCom Malloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", vet1[i]);

    // Calloc faz a alocação de memória e os inicializa com 0
    printf("\nCom callc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", vet2[i]);


    return 0;
}