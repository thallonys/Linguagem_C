#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor = 10, menor, maior, vet[] = {50,10,250,500,25};
    int *p;
    // p = 779; Essa atribui��o � errada.
    p = &valor; // Essa atribui��o � v�lida.

    printf("valor: %d\tEndere�o de valor: %p\n", valor, &valor);
    printf("Endere�o de p: %p\n", &p);
    printf("Conte�do de p: %p\n", p);
    printf("Conte�do apontado por p: %d\n", *p);

    return 0;
}