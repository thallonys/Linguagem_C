#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor = 10, menor, maior, vet[] = {50,10,250,500,25};
    int *p;
    // p = 779; Essa atribuição é errada.
    p = &valor; // Essa atribuição é válida.

    printf("valor: %d\tEndereço de valor: %p\n", valor, &valor);
    printf("Endereço de p: %p\n", &p);
    printf("Conteúdo de p: %p\n", p);
    printf("Conteúdo apontado por p: %d\n", *p);

    return 0;
}