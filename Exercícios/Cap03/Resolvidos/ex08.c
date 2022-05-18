#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set charset
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    float deposito;
    float juros;
    float vRedimento; // valor rendimento
    float vTotal; // valor total

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o valor do dep�sito: ");
    scanf("%f%*c", &deposito);
    printf("Informe a taxa de juros: ");
    scanf("%f%*c", &juros);

    // c�lculo
    vRedimento = deposito * juros / 100;
    vTotal = deposito + vRedimento;

    // limpa tela
    system("cls || clear");
    
    // output
    printf("O valor do rendimeno � de R$ %.2f.\n", vRedimento);
    printf("O valor total � de R$ %.2f.\n", vTotal);

}
