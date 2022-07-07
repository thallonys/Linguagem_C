#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void)
{
    // Configura locale
    setlocale(LC_ALL, "Portuguese");

    // Variávies
    float salarioInicial = 0;
    float saldoAtual = 0;
    float CPMF = 0;
    float cheque1 = 0;
    float cheque2 = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe o valor do salário depositado: ");
    scanf("%f%*c", &salarioInicial);

    printf("%s", "Informe o valor do primeiro cheque: ");
    scanf("%f%*c", &cheque1);

    printf("%s", "Informe o valor do segundo cheque: ");
    scanf("%f%*c", &cheque2);

    // Cálculos
    CPMF = 0.38 / 100;
    cheque1 = CPMF * cheque1 + cheque1;
    cheque2 = CPMF * cheque2 + cheque2;
    saldoAtual =  salarioInicial - (cheque1 + cheque2);

    // Output
    printf("O saldo atual é de R$ %.2f.\n", saldoAtual);
}