#include <stdio.h>
#include <stdlib.h>

// Após passar como parâmetro o endereço da variável idade,
// deve-se passar um ponteiro na função imprimir
// void imprimir(int num) 
    void imprimir(int *num) // Variável que aponta para um inteiro
                            // Aqui esse ponteiro recebe o endereço
                            // da variável idade. 
{
    // Agora, para imprimir, deve-se passar o ponteiro para que seja impresso
    // o conteúdo do ponteiro. Então:
    // printf("%d\n", num);
        printf("%d\n", *num);
    
    // Agora, para alterar o valor de num, deve-se passar o ponteiro
    // num = 80;
        *num = 80; // Aqui indica que o valor 80 é atribuido ao
                    // endereço da variável num. Assim, o conteúdo
                    // de num é alterado efetivamente
}

int main() {

    int idade = 35;

    // Para que seja possível alterar o valor da variável idade
    // pela função imprimir (linha 14), é necessário para como
    // parâmetro o endereço da variável idade
    // imprimir(idade);
        imprimir(&idade); // Endereço da variável idade
    // Subir para a função imprimir... (linha 7)
    printf("No main: %d\n", idade);

    return 0;
}