#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    // n = nota
    // p = peso
    float n1, n2, n3, p1, p2, p3, media;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Infome a primeira nota: ");
    scanf("%f%*c", &n1);
    printf("%s", "Informe o primeiro peso: ");
    scanf("%f%*c", &p1);

    printf("%s", "Infome a segunda nota: ");
    scanf("%f%*c", &n2);
    printf("%s", "Informe o segundo peso: ");
    scanf("%f%*c", &p2);

    printf("%s", "Infome a terceira nota: ");
    scanf("%f%*c", &n3);
    printf("%s", "Informe o terceiro peso: ");
    scanf("%f%*c", &p3);

    // cálculo das notas
    media = n1 * p1 + n2 * p2 + n3 * p3 / (p1 + p2 + p3);

    // exibir media
    printf("O valor da média é %.2f.\n", media);

    return 0;
}