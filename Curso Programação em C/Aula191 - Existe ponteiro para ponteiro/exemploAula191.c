#include <stdio.h>
#include <stdlib.h>

// O que é ponteiro para ponteiro?

int main() {

    int A = 100, *B, **C;

    B = &A;
    C = &B;
    // Mostra o endereço da variável A e o seu conteúdo.
    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    // Mostra o endereço da variável B e seu conteúdo, porém
    // esse conteúdo é o endereço de A. Pois, há essa atribuição
    // na linha 10.
    printf("Endereco de B: %p\tConteudo de B: %p\n", &B, B);
    // Aqui mostra o conteúdo aponto pela variável ponteiro B.
    // Note que, para mostrar o conteúdo apontado pelo ponteiro
    // é necessário usar o asterísco aqui para mostar tal valor.
    // E esse valor é o valor de A, pois é o valor do endereço. 
    printf("Conteudo apontado por B: %d\n", *B);
    // Mostra o endereço do ponteiro C e seu contéudo.
    // Aqui o conteúdo do ponteiro C é o endereço do ponteiro B.
    printf("Endereco de C: %p\tConteudo de C: %p\n", &C, C);
    // Aqui mostra o valor que o ponteiro C aponta.
    // Esse valor é o valor do ponteiro A, pois o ponteiro C
    // recebe o endereço do ponteiro B e este recebe o endereço
    // da variável A. Logo, é mostrado o conteúdo da variável A.
    printf("Conteudo apontado por C: %d\n", **C);

    return 0;
}