#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    float valFabrica;     // valor f�brica
    float perLucroDist;   // percentual lucro distribuidor
    float perImposto;     // percentual imposto
    float lucroDist;      // lucro distribuidor
    float valImposto;     // valor imposto
    float valFinal;       // valor final

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o valor de f�brica de um ve�culo: ");
    scanf("%f%*c", &valFabrica);

    printf("%s", "Informe o percentual de lucro do distribuidor: ");
    scanf("%f%*c", &perLucroDist);

    printf("%s", "Informe o percentual de impostos: ");
    scanf("%f%*c", &perImposto);

    // c�lculo
    lucroDist = valFabrica * perLucroDist / 100;
    valImposto = valFabrica * perImposto / 100;
    valFinal = valFabrica + valImposto + lucroDist;

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor correspondente ao lucro do distribuidor � R$ %.2f.\n"
            "O valor correspondente aos impostos � R$ %.2f.\n"
            "O pre�o final do ve�culo � R$ %.2f.\n",
            lucroDist, valImposto, valFinal);

}