#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal
int main(void)
{
    // Configura��o do locale
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float alturaDegrau = 0;
    float alturaDesejada = 0;
    float degrausNecessarios = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe a altura do degrau da escada (cent�metros): ");
    scanf("%f%*c", &alturaDegrau);

    printf("%s", "Informe a altura desejada (metros): ");
    scanf("%f%*c", &alturaDesejada);

    // C�lculos
    alturaDesejada = alturaDesejada * 100; // metros para centimetros
    degrausNecessarios = alturaDesejada / alturaDegrau;

    // Output
    printf("A quantidade de degraus necess�rios � %.2f.\n", degrausNecessarios);
}