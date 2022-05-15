#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    variáveis
    salarioIni = salario inicial
    salarioRj = salario reajustado
    */
    float salarioIni = 1000, salarioRj, aumento = 15; 
    int anoAtual;
    // limpa tela
    system("cls || clear");

    printf("Informe o ano atual: ");
    scanf("%d%*c", &anoAtual);

    // cálculo do salário reajustado até atualmente
    // ajuste em 2006
    salarioRj = salarioIni + (aumento / 1000) * salarioIni;

    // ajuste em 2007 em diante
    for (int i = 2007; i <= anoAtual; i++)
    {
        aumento = aumento * 2;
        salarioRj = salarioRj + (salarioRj * (aumento / 1000));
    }

    // exibir salário reajustado atualmente
    printf("O salário reajustado atualmente é R$ %.2f.\n", salarioRj);

    printf("\n");

    return 0;
}