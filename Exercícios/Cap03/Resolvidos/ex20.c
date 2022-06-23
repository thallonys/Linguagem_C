#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Fun��o principal
int main(void)
{
    // Configura��o locale
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float angulo = 0;
    float alturaParede = 0;
    float alturaEscada = 0;
    float radiano = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe a altura da parede: ");
    scanf("%f%*c", &alturaParede);

    printf("%s", "Informe o �ngulo: ");
    scanf("%f%*c", &angulo);

    // C�lculo
    radiano = angulo * 3.14 / 180;
    alturaEscada = alturaParede / sin(radiano);

    // Output
    printf("A altura da escada � %.2f.\n", alturaEscada);
}