#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int num1; // número
    int num2;
    int num3;
    int num4;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe três número em ordem crescente: ");
    scanf("%d%*c%d%*c%d%*c", &num1, &num2, &num3);
    
    // verifica se os números estão em ordem crescente
    if (num1 < num2 && num2 < num3)
    {
        printf("%s", "Informe o quarto número: ");
        scanf("%d%*c", &num4);
    }
    else
    {
        puts("Os número informados não estão na ordem crescente.");
    }

    // ordenando os quatro números
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

