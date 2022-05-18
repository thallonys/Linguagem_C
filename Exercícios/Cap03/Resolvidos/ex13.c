#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    float vPes; // valor em p�s
    float vPolegadas;
    float vJarda;
    float vMilha;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe um valor em p�s: ");
    scanf("%f%*c", &vPes);

    // c�lculo
    vPolegadas = vPes / 12;
    vJarda = 3 * vPes;
    vMilha = 1760 * vJarda;

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor das polegadas � %.2f;\n"
            "O valor das jardas � %.2f;\n"
            "O valor das milhas � %.2f.\n",
            vPolegadas, vJarda, vMilha);

}