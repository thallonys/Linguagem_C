#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int I;   // número inteiro
    float A; // A, B e C reais
    float B;
    float C;

    // limpa tela
    system("cls || clear");

    // input
    printf("|--------------------------------------------------------|\n"
           "| Valor de I |             Forma a escrever              |\n"
           "|      1     | A, B, C em ordem crescente.               |\n"
           "|      2     | A, B, C em ordem decrescente.             |\n"
           "|      3     | O maior fica entre os outros dois números.|\n"
           "|--------------------------------------------------------|\n");
    printf("%s", "Escolha um valor: ");
    scanf("%d%*c", &I);

    if (I > 3)
    {
        puts("Valor escolhido errado.");
    }
    else
    {
        printf("%s", "Digite valores para A, B e C, respectivamente: ");
        scanf("%f%*c%f%*c%f%*c", &A, &B, &C);

        if (A != B && B != C)
        {
            if (I == 1)
            {
                if (A < B)
                {
                    if (B < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", A, B, C);
                    }
                    else if (B > C && A < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", A, C, B);
                    }
                    else if (B > C && A > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", C, A, B);
                    }
                }
                else if (A > B)
                {
                    if (B > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", C, B, A);
                    }
                    else if (B < C && A > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", B, C, A);
                    }
                    else if (B < C && A < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", B, A, C);
                    }
                }
            }
            else if (I == 2)
            {
                if (A < B)
                {
                    if (B < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", C, B, A);
                    }
                    else if (B > C && A < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", B, C, A);
                    }
                    else if (B > C && A > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", B, A, C);
                    }
                }
                else if (A > B)
                {
                    if (B > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", A, B, C);
                    }
                    else if (B < C && A > C)
                    {
                        printf("%.1f -> %.1f -> %.1f", A, C, B);
                    }
                    else if (B < C && A < C)
                    {
                        printf("%.1f -> %.1f -> %.1f", C, A, B);
                    }
                }
            }
            else
            {
                if (A > B && B > C)
                {
                    printf("%.1f -> %.1f -> %.1f", C, A, B);
                }
                else if (A > B && B < C)
                {
                    printf("%.1f -> %.1f -> %.1f", B, A, C);
                }
                else if (A < B && B > C)
                {
                    printf("%.1f -> %.1f -> %.1f", A, B, C);
                }
                else if (A < B && B < C)
                {
                    printf("%.1f -> %.1f -> %.1f", A, C, B);
                }

                else if (B > A && A > C)
                {
                    printf("%.1f -> %.1f -> %.1f", C, B, A);
                }
                else if (B > A && A < C)
                {
                    printf("%.1f -> %.1f -> %.1f", A, B, C);
                }
                else if (B < A && A > C)
                {
                    printf("%.1f -> %.1f -> %.1f", B, A, C);
                }
                else if (B < A && A < C)
                {
                    printf("%.1f -> %.1f -> %.1f", B, C, A);
                }

                else if (C > B && B > A)
                {
                    printf("%.1f -> %.1f -> %.1f", A, C, B);
                }
                else if (C > B && B < A)
                {
                    printf("%.1f -> %.1f -> %.1f", A, C, B);
                }
                else if (C > B && B < A)
                {
                    printf("%.1f -> %.1f -> %.1f", B, C, A);
                }
                else if (C < B && B > A)
                {
                    printf("%.1f -> %.1f -> %.1f", C, B, A);
                }
                else if (C < B && B < A)
                {
                    printf("%.1f -> %.1f -> %.1f", C, A, B);
                }
                
            }
        }
        else
        {
            puts("Nenhum número pode ser igual ao outro.");
        }
    }

    printf("%s", "\nAperte ENTER para continuar.");
    getchar();
}