#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    Variáveis
    salarioB = salario base
    salarioR = salario a receber
    grat = gratificação
    imp = imposto
    */ 
    float salarioB, salarioR, grat = 50, imp = 10;
    
    // apaga tela
    system("cls || clear");

    // input
    printf("Informe o salário base: ");
    scanf("%f%*c", &salarioB);

    // cálculo do salário a receber
    salarioR = salarioB + grat - (salarioB * imp / 100);

    // exibir salario a receber
    printf("O valor do salário a receber é R$ %.2f", salarioR);
    
    return 0;
}