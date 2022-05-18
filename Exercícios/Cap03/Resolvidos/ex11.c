#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int num; // número
    int quadrado;
    int cubo;
    int rQuadrada; // raiz quadrada
    int rCubida; // raiz cúbica
    // limpta tela
    system("cls || clear");

    // input
    printf("Informa o valor do número: ");
    scanf("%d%*c", &num);

    // cálculo
    // quadrado
    quadrado = num * num;

    // cubo
    cubo = num * num * num;

    // raiz quadrada
    rQuadrada = sqrt(num);

    // raiz cúbica
    rCubida = cbrt(num);

    // limpa tela
    system("cls || clear");

    printf("O valor do número ao quadrado é %d;\n"
            "Ao cubo é %d;\n"
            "A raiz quadrada é %d;\n"
            "A raiz cúbida é %d.\n",
            quadrado, cubo, rQuadrada, rCubida);
}