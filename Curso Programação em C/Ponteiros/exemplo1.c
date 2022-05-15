#include <stdio.h>
#include <stdlib.h>

int main() {

    // O ponteiro é indicado pelo asterísco
    int *valor1, valor2 = 50;
    char *letra1, letra2 = 'g';

    // Um ponteiro somente recebe endereços de memória.
    // Por isso, deve-se passar o endereço da variável valor2
    // em do valor de seu conteúdo para o ponteiro.
    valor1 = &valor2;

    // Aqui segue a mesma lógica. O ponteiro letra1 recebe o 
    // endereço de memória da variável letra2.
    letra1 = &letra2;


    // Aqui é exibido o valor da variável valor2.
    printf("Valor da variavel valor2: %d\n", valor2);

    // Exibe o endereço da variável valor2.
    printf("Endereco da variavel valor2: %p\n", &valor2);

    // Exibe o conteúdo do ponteiro valor1. Note que, esse valor
    // é o endereço da variável valor2, pois esse endereço foi
    // atribuido ao ponteiro valor1 na linha 13.
    printf("Conteudo do ponteiro valor1: %p\n", valor1);

    // Exibe o conteúdo apontado pelo ponteiro valor1. Note que,
    // em vez de ser mostrado o endereço, é mostrado o valor do conteúdo
    // da variável valor2. Isso porque, o ponteiro valor1 recebe o
    // endereço da variável valor2 e, pelos comandos passado abaixo, 
    // o conteúdo da variável valor2 é mostrado pelo ponteiro valor1.
    printf("Conteudo apontado pelo ponteiro valor1: %d\n", *valor1);

    // Idem...
    printf("\nValor da variavel letra2: %c\n", letra2);
    printf("Endereco da variavel letra2: %p\n", &letra2);
    printf("Conteudo da variavel letra1: %p\n", letra1);
    printf("Conteudo apontado pela variavel letra1: %c\n", *letra1);


    return 0;
}