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
    printf("%s", "Informe um n�mero inteiro qualquer: ");
    scanf("%d%*c", &numero);

    // cálculo
    if (numero % 2 == 0)
    {
        puts("Esse n�mero � par.");
    }
    else
    {
        puts("Esse n�mero � �mpar.");
    }

    puts("Aperte ENTER para continuar.");
    getchar();

}