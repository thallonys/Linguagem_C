#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    float num1; // n�mero
    float num2;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o n�mero 1: ");
    scanf("%f%*c", &num1);

    printf("%s", "Informe o n�mero 2: ");
    scanf("%f%*c", &num2);

    // estrutura condicional
    if(num1 > num2)
    {
        printf("O n�mero %.1f � maior do que o n�mero %.1f.\n", num1, num2);
    }
    else{
        printf("O n�mero %.1f � maior do que o n�mero %.1f.\n", num2, num1);
    }

    printf("\nAperte ENTER para continuar.");
    getchar();
}