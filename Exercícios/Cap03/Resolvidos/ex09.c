#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari·veis
    float base;
    float altura;
    float area;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o valor da base da pir‚mide: ");
    scanf("%f%*c", &base);

    printf("Informe o valor da altura da pir‚mide: ");
    scanf("%f%*c", &altura);

    // c√°lculo
    area = base * altura / 2;

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor da ·rea do tri‚ngulo È de %.2f.\n", area);
}