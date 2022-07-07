#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int num1; // n�mero
    int num2;
    int num3;
    int num4;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe tr�s n�mero em ordem crescente: ");
    scanf("%d%*c%d%*c%d%*c", &num1, &num2, &num3);
    
    // verifica se os n�meros est�o em ordem crescente
    if (num1 < num2 && num2 < num3)
    {
        printf("%s", "Informe o quarto n�mero: ");
        scanf("%d%*c", &num4);
    }
    else
    {
        puts("Os n�mero informados n�o est�o na ordem crescente.");
    }

    // ordenando os quatro n�meros
    if (num4 < num1)
    {
        printf("%d, %d. %d, %d", num4, num1, num2, num3);
    }
    else if (num4 > num1 && num4 < num2)
    {
        printf("%d, %d, %d, %d", num1, num4, num2, num3);
    }
    else if (num4 > num2 && num4 < num3)
    {
        printf("%d, %d, %d, %d", num1, num2, num4, num3);
    }
    else
    {
        printf("%d, %d, %d, %d", num1, num2, num3, num4);
    }

    puts("Aperte ENTER para continuar.");
    getchar();
}

