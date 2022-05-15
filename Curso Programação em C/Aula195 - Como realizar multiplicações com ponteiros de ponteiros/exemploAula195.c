#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Exercícios 4

Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro,
o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, 
C, D. O ponteiro B deve ser usado para calcular o dobro, C o triplo
e D o quádruplo.

*/

int main() {

srand(time(NULL));

int A, *B, **C, ***D;

// A recebe UM VALOR;
// *B recebe valor de A vezes 2;
// *C recebe valor de B vezes 3;
// *D recebe valor de C vezes 4;

A = rand() % 10 + 1;
// A = 5;
B = &A;
C = &B;
D = &C;

printf("\nConteudo de A: %d\n", A);
printf("Conteudo de B: %d\n", *B * 2);
printf("Conteudo de C: %d\n", **C * 3);
printf("Conteudo de D: %d\n\n", ***D * 4);

    return 0;
}