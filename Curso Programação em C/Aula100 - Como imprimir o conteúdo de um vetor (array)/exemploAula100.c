#include <stdio.h>
#include <stdlib.h>

// Como imprimir o conteúdo de um vetor?

int main()
{

    // Variáveis tradicionais.
    int idade;
    char sexo;
    float n1;

    // Agora, vetores.
    // Modos de declarar um vetor.
    int num1[10];
    int num2[] = {1, 5, 9, 15, 43};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    float notas[3] = {7.5, 8.3, 9.5};

    // Para percorrer o vetor é necessário uma estrutura de repetição.

    for (int i = 0; i < 5; i++)
        printf("%d ", num2[i]);

    printf("\n\n");

    for (int i = 0; i < 5; i++)
        printf("%c ", vogais[i]);

    printf("\n\n");

    for (int i = 0; i < 3; i++)
        printf("%.2f", notas[i]);

    return 0;
}