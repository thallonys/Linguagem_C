#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    // pAumento = percentual de aumento
    // vAumento = valor aumento
    // nSalario = novo salário
    float salario, pAumento, vAumento, nSalario;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o salário atual: ");
    scanf("%f%*c", &salario);

    printf("Informe o percentual de aumento: ");
    scanf("%f*c", &pAumento);

    // Cálculo no novo salário
    vAumento = salario * pAumento / 100;
    nSalario = salario + vAumento;

    // exibir valor aumento e novo salário
    printf("O valor do aumento é R$ %.2f"
            " e o valor do novo salário é R$ %.2f.\n\n",
            vAumento, nSalario);
    return 0;
}