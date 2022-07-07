#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");
    
    // variáveis
    float pi = 3.14;
    float raio;
    float area;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o valor do raio: ");
    scanf("%f%*c", &raio);

    // cálculo
    area = pi * (raio * raio);

    // limpa tela
    system("cls || clear");

    // output
    printf("O valor da área do círculo é de %.2f.\n", area);

}