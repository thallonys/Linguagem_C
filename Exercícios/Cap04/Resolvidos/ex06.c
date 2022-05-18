#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variÃ¡veis
    int numero;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe um número inteiro qualquer: ");
    scanf("%d%*c", &numero);

    // cÃ¡lculo
    if (numero % 2 == 0)
    {
        printf("Esse número é par.\n");
    }
    else
    {
        printf("Esse número é ímpar.\n");
    }

    printf("\nAperte ENTER para continuar.");
    getchar();

}