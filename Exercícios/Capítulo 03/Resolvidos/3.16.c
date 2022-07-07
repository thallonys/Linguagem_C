#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void)
{
    // Configuração do locale
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int horasTrabalhadas = 0;
    float salarioMinimo = 0;
    float salarioReceber = 0;
    float salarioBruto = 0;
    float imposto = 0;
    float valorHoraTrabalhada = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe o número de horas trabalhadas: ");
    scanf("%d%*c", &horasTrabalhadas);

    printf("%s", "Informe o valor do salário mínimo: ");
    scanf("%f%*c", &salarioMinimo);

    // Cálculo
    valorHoraTrabalhada = salarioMinimo / 2;
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    imposto = 3 / 100 * salarioBruto;
    salarioReceber = salarioBruto - imposto;

    printf("O salário a receber é de R$ %.2f.\n", salarioReceber);
}