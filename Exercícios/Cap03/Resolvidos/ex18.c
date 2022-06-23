#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FunÃ§Ã£o principal
int main(void)
{
    // ConfiguraÃ§Ã£o do locale
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float pesoSacoRacao = 0;
    float quantidade1 = 0;
    float quantidade2 = 0;
    float dias = 0;
    float restoRacao = 0;

    // Limpa tela
    system("cls || clear");

    // Input
    printf("%s", "Informe o peso do saco de ração: ");
    scanf("%f%*c", &pesoSacoRacao);

    printf("%s", "Informe a quantidade dada ao primeiro gato: ");
    scanf("%f%*c", &quantidade1);

    printf("%s", "Informe a quantidade dada ao segundo gato: ");
    scanf("%f%*c", &quantidade2);

    printf("%s", "Informe a quantidade de dias para verificação: ");
    scanf("%f%*c", &dias);

    // Cálculos
    pesoSacoRacao = pesoSacoRacao * 1000; // transformar em gramas
    restoRacao = pesoSacoRacao - dias * (quantidade1 + quantidade2);

    // Output
    printf("A quantidade final de raçãoo é de %.2f Kg.\n", restoRacao / 1000); // retornar para quilos
}