#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    Vari�veis
    salarioB = salario base
    salarioR = salario a receber
    grat = gratifica��o
    imp = imposto
    */ 
    float salarioB, salarioR, grat = 50, imp = 10;
    
    // apaga tela
    system("cls || clear");

    // input
    printf("Informe o sal�rio base: ");
    scanf("%f%*c", &salarioB);

    // c�lculo do sal�rio a receber
    salarioR = salarioB + grat - (salarioB * imp / 100);

    // exibir salario a receber
    printf("O valor do sal�rio a receber � R$ %.2f", salarioR);
    
    return 0;
}