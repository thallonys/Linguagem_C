#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal
int main(void)
{
    // Configura��o do locale
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int horasTrabalhadas = 0;
    float salarioMinimo = 0;
    float salarioReceber = 0;
    float salarioBruto = 0;
    float imposto = 0;
    float valorHoraTrabalhada = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe o n�mero de horas trabalhadas: ");
    scanf("%d%*c", &horasTrabalhadas);

    printf("%s", "Informe o valor do sal�rio m�nimo: ");
    scanf("%f%*c", &salarioMinimo);

    // C�lculo
    valorHoraTrabalhada = salarioMinimo / 2;
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    imposto = 3 / 100 * salarioBruto;
    salarioReceber = salarioBruto - imposto;

    printf("O sal�rio a receber � de R$ %.2f.\n", salarioReceber);
}