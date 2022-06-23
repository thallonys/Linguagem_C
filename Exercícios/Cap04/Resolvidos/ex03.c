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

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o número 1: ");
    scanf("%f%*c", &num1);

    printf("%s", "Informe o número 2: ");
    scanf("%f%*c", &num2);

    // estrutura condicional
    if(num1 > num2)
    {
        printf("O número %.1f é maior do que o número %.1f.\n", num1, num2);
    }
    else{
        printf("O número %.1f é maior do que o número %.1f.\n", num2, num1);
    }

    printf("\nAperte ENTER para continuar.");
    getchar();
}