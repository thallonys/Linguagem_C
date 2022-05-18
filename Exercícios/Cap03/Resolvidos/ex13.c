#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float vPes; // valor em pés
    float vPolegadas;
    float vJarda;
    float vMilha;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe um valor em pés: ");
    scanf("%f%*c", &vPes);

    // cálculo
    vPolegadas = vPes / 12;
    vJarda = 3 * vPes;
    vMilha = 1760 * vJarda;

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor das polegadas é %.2f;\n"
            "O valor das jardas é %.2f;\n"
            "O valor das milhas é %.2f.\n",
            vPolegadas, vJarda, vMilha);

}