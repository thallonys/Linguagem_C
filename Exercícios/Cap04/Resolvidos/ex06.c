#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int numero;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe um n�mero inteiro qualquer: ");
    scanf("%d%*c", &numero);

    // cálculo
    if (numero % 2 == 0)
    {
        printf("Esse n�mero � par.\n");
    }
    else
    {
        printf("Esse n�mero � �mpar.\n");
    }

    printf("\nAperte ENTER para continuar.");
    getchar();

}