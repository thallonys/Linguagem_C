#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Como aloar um vetor dinâmico?

int main() {
    int tam; 
    int *vet;

    srand(time(NULL));

    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &tam);
    
    // Quando é preciso alocar uma quantidade grande de memória, como no caso para um vetor...
    // Deve-se multiplica o tamanho que malloc alocar pela quantidade de memória necessária.
    // Por isso, no parametro do malloc é usasdo tam * sizeof(int). Pois tam multiplica sizeof.
    // Assim, malloc retorna o tamanho de memória necessária ao ponteiro vet.
    vet = malloc(tam * sizeof(int));

    if(vet) {
        printf("Memoria alocada com sucesso!\n");

        for(int i = 0; i < tam; i++) {
            // Aqui é feito uma operação com o vetor para que ele seja ingrementado em cada loop
            *(vet + i) = rand() % 100;
        }

        for(int i = 0; i < tam; i++) 
        {
            printf("%d ", *(vet + i));
        }
        printf("\n");

        printf("Digite o tamanho do vetor: ");
        scanf("%d%*c", &tam);

        vet = realloc(vet, tam);

        printf("\nVetor realocado: \n");
        for(int i = 0; i < tam; i++) 
           {
            printf("%d ", *(vet + i));
           }
        printf("\n");

    } 
    
    else 
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}