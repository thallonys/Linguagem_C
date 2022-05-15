#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float salario, nSalario, aumento = 15;
    system("cls || clear"); // limpa tela
    // input
    printf("Informe o salário atual: ");
    scanf("%f%*c", &salario);

    // cálculo do novo salário
    nSalario = salario + (salario * (aumento / 100));

    // exibir novo salário
    printf("O novo salário é %.2f.\n", nSalario);


    return 0;
}