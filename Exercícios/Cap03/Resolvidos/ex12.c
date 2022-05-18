#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int num1 = 0; // número
    int num2 = 0;
    int elevado = 0;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o valor da base: ");
    scanf("%d%*c", &num1);

    printf("Informe o valor do expoente: ");
    scanf("%d%*c", &num2);

    // cálculo
    elevado = pow(num1, num2) + 1;

    // limpa tela
    system("cls || clear");

    // output
    printf("O resultado da potência é %d.\n", elevado);
}