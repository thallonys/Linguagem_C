// De quanta memória um pontiero precisa?

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    char *p2;
    float *p3;

    // sizeof() mostra o tamanho da variável declarada
    // É necessário usar a variável com parâmetro
    // da função sizeof().
    printf("Tamamho: %d\n", sizeof(p3));

    // É mostrado sempre o mesmo valor porque
    // o ponteiro sempre recebe um endereço de
    // memória e esse endereço sempre tem o 
    // mesmo tamanho, independente do tipo de dado
    // que ele aponta.

    return 0;
}