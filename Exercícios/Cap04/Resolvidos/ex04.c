#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float num1; // número
    float num2;
    float num3;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o primeiro número: ");
    scanf("%f%*c", &num1);
    printf("Informe o segundo número: ");
    scanf("%f%*c", &num2);
    printf("Informe o terceiro número: ");
    scanf("%f%*c", &num3);

    // limpa tela
    system("cls || clear");

    // estrutura condicional
    if (num1 > num2)
    {
        if (num2 > num3)
        {
            printf("%.1f, %.1f, %.1f", num3, num2, num1);
        }
        else if (num2 < num3)
        {
            printf("%.1f, %.1f, %.1f", num2, num3, num1);
        }
    }
    else if (num1 < num2)
    {
        if (num2 > num3)
        {
            printf("%.1f, %.1f, %.1f", num1, num3, num2);
        }
        else if (num2 < num3)
        {
            printf("%.1f, %.1f, %.1f", num1, num2, num3);
        }
    }

    printf("\nAperte ENTER para continuar.");
    getchar();
}