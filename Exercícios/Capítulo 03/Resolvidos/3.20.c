#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Função principal
int main(void)
{
    // Configuração locale
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float angulo = 0;
    float alturaParede = 0;
    float alturaEscada = 0;
    float radiano = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe a altura da parede: ");
    scanf("%f%*c", &alturaParede);

    printf("%s", "Informe o ângulo: ");
    scanf("%f%*c", &angulo);

    // Cálculo
    radiano = angulo * 3.14 / 180;
    alturaEscada = alturaParede / sin(radiano);

    // Output
    printf("A altura da escada é %.2f.\n", alturaEscada);
}