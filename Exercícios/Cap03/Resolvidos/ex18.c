#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void)
{
    // Configuração do locale
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float pesoSacoRacao = 0;
    float quantidade1 = 0;
    float quantidade2 = 0;
    float dias = 0;
    float restoRacao = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe o peso do saco de ra��o: ");
    scanf("%f%*c", &pesoSacoRacao);

    printf("%s", "Informe a quantidade dada ao primeiro gato: ");
    scanf("%f%*c", &quantidade1);

    printf("%s", "Informe a quantidade dada ao segundo gato: ");
    scanf("%f%*c", &quantidade2);

    printf("%s", "Informe a quantidade de dias para verifica��o: ");
    scanf("%f%*c", &dias);

    // C�lculos
    pesoSacoRacao = pesoSacoRacao * 1000; // transformar em gramas
    restoRacao = pesoSacoRacao - dias * (quantidade1 + quantidade2);

    // Output
    printf("A quantidade final de ra��oo � de %.2f Kg.\n", restoRacao / 1000); // retornar para quilos
}