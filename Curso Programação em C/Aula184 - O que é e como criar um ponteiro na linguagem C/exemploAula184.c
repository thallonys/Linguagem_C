// O que é e como criar um ponteiro?

#include <stdio.h>
#include<stdlib.h>

int main () {

    // Quando uma variável é configurada e recebe um valor. Este valor
    // é salvo num endereço de memória na memória
    int num = 10;

    // Um ponteiro é uma variável que armazena o endereço de memória
    int *p; // Aponta para uma região de memória que vai armazenar um inteiro
            // Ponteiro só armazena endereços de memória

    p = &num; 
    
    // Exibe o valor da variável num
    printf("Valor de num: %d\n", num);

    // Exibe o valor do endereço da variável num
    printf("Endereco de num: %p\n", &num);

    // Exibe o volor do endereço da variável p
    // Nesse caso, é mostrado o mesmo valor do endereço de num
    // porque o ponteiro p recebe o endereço num (&num) como está
    // na linha 16.
    printf("Valor de p: %p\n", p);

    // Exibe o valor de p.
    // Note que não é o endereço de p, mas, sim, o valor
    // que p aponta. Assim, esse valor é o valor de num, 10.
    // E repare que para o ponteiro mostrar o valor
    // que aponta, é necessário o uso de asterísco.
    printf("Valor apontado por p: %d\n", *p);

    // Exibe o valor do endereço de p, não sendo
    // o endereço de num.
    printf("Emdereco de p: %p\n", &p);

    return 0;
}