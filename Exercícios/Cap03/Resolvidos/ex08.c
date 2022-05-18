#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set charset
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float deposito;
    float juros;
    float vRedimento; // valor rendimento
    float vTotal; // valor total

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o valor do depósito: ");
    scanf("%f%*c", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f%*c", &juros);

    // cálculo
    vRedimento = deposito * juros / 100;
    vTotal = deposito + vRedimento;

    // limpa tela
    system("cls || clear");
    
    // output
    printf("O valor do rendimeno é de R$ %.2f.\n", vRedimento);
    printf("O valor total é de R$ %.2f.\n", vTotal);

}
