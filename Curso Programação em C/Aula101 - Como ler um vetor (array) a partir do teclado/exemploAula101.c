#include <stdio.h>
#include <stdlib.h>

// Como preencher um vetor por meio do teclado?

int main()
{

    // Variáveis tradicionais.
    int idade;
    char sexo;
    float n1;

    // Agora, vetores.
    // Modos de declarar um vetor.
    int i;
    int num2[10];

    for(i = 0; i < 10; i++) {
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &num2[i]);
    }    

    for(i = 0; i < 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");

    

    return 0;
}