#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    // salarioB = salario base
    // grat = gratifica��o
    // imp = imposto
    // salarioR = salario a receber
    float salarioB, grat = 5, imp = 7, salarioR;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o sal�rio base: ");
    scanf("%f%*c", &salarioB);

    // c�lculo do sal�rio a receber
    salarioR = salarioB + (salarioB * grat / 100) - (salarioB * imp / 100);

    // exibir sal�rio a receber
    printf("O valor do sal�rio a receber � R$ %.2f\n", salarioR);
    
    return 0;
}