#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float valFabrica;     // valor fábrica
    float perLucroDist;   // percentual lucro distribuidor
    float perImposto;     // percentual imposto
    float lucroDist;      // lucro distribuidor
    float valImposto;     // valor imposto
    float valFinal;       // valor final

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o valor de fábrica de um veículo: ");
    scanf("%f%*c", &valFabrica);

    printf("%s", "Informe o percentual de lucro do distribuidor: ");
    scanf("%f%*c", &perLucroDist);

    printf("%s", "Informe o percentual de impostos: ");
    scanf("%f%*c", &perImposto);

    // cálculo
    lucroDist = valFabrica * perLucroDist / 100;
    valImposto = valFabrica * perImposto / 100;
    valFinal = valFabrica + valImposto + lucroDist;

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor correspondente ao lucro do distribuidor é R$ %.2f.\n"
            "O valor correspondente aos impostos é R$ %.2f.\n"
            "O preço final do veículo é R$ %.2f.\n",
            lucroDist, valImposto, valFinal);

}