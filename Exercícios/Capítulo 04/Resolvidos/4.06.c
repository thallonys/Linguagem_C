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
    printf("%s", "Informe um número inteiro qualquer: ");
    scanf("%d%*c", &numero);

    // cÃ¡lculo
    if (numero % 2 == 0)
    {
        puts("Esse número é par.");
    }
    else
    {
        puts("Esse número é ímpar.");
    }

    puts("Aperte ENTER para continuar.");
    getchar();

}