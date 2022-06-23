#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void)
{
    // Configuração do locale
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float alturaDegrau = 0;
    float alturaDesejada = 0;
    float degrausNecessarios = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe a altura do degrau da escada (centímetros): ");
    scanf("%f%*c", &alturaDegrau);

    printf("%s", "Informe a altura desejada (metros): ");
    scanf("%f%*c", &alturaDesejada);

    // Cálculos
    alturaDesejada = alturaDesejada * 100; // metros para centimetros
    degrausNecessarios = alturaDesejada / alturaDegrau;

    // Output
    printf("A quantidade de degraus necessários é %.2f.\n", degrausNecessarios);
}