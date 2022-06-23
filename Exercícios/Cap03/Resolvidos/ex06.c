#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    // salarioB = salario base
    // grat = gratificação
    // imp = imposto
    // salarioR = salario a receber
    float salarioB, grat = 5, imp = 7, salarioR;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o salário base: ");
    scanf("%f%*c", &salarioB);

    // cálculo do salário a receber
    salarioR = salarioB + (salarioB * grat / 100) - (salarioB * imp / 100);

    // exibir salário a receber
    printf("O valor do salário a receber é R$ %.2f\n", salarioR);
    
    return 0;
}