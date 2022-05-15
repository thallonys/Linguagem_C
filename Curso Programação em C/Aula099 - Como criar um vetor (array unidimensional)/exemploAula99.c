#include <stdio.h>
#include <stdlib.h>

// Como criar um vetor?

int main()
{

    // Variáveis tradicionais.
    int idade;
    char sexo;
    float n1;

    // Agora, vetores.
    // Modos de declarar um vetor.
    int num1[10];                     // vetores de 10 caracteres
    int num2[] = {1, 5, 9, 15, 43};   // vetor vazio. Mas, o tamanho é definido pela quantidade de caracteres que é atribuido.
    int num3[5] = {4, 7, 5};          // Vetor de 5, porém com 3 elementos. O restante que falta é preenchido com 0.
    int num4[5] = {1, 2, 3, 4, 5, 6}; // O vetor a mais é perdido.
    int num5[5] = {0};                // O vetor é preenchido com 0.

    char letras[100];
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    float notas[3] = {7.5, 8.3, 9.5};

    return 0;
}