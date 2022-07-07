#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int num; // n�mero
    int quadrado;
    int cubo;
    int rQuadrada; // raiz quadrada
    int rCubida; // raiz c�bica
    // limpta tela
    system("cls || clear");

    // input
    printf("Informa o valor do n�mero: ");
    scanf("%d%*c", &num);

    // c�lculo
    // quadrado
    quadrado = num * num;

    // cubo
    cubo = num * num * num;

    // raiz quadrada
    rQuadrada = sqrt(num);

    // raiz c�bica
    rCubida = cbrt(num);

    // limpa tela
    system("cls || clear");

    printf("O valor do n�mero ao quadrado � %d;\n"
            "Ao cubo � %d;\n"
            "A raiz quadrada � %d;\n"
            "A raiz c�bida � %d.\n",
            quadrado, cubo, rQuadrada, rCubida);
}