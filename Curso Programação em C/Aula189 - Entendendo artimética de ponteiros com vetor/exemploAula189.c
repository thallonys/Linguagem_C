#include <stdio.h>
#include <stdlib.h>

// Aritmética de ponteiros com vetor.

void imprimir(int vet[], int tam) {
    int i;
    for(i = 0; i < tam; i++)
                    // Este asterisco indica que quero mostrar o conteúdo
                    // do ponteiro. (Não o endereço apontado)
        printf("%d ", *(vet + i)); // aritmética de ponteiros
                    // O endereço de memória vet é somado a variável i.
                    // Quando isso ocorre, o endereço de memória "vai 
                    // avançando" e, com isso, o contéudo do vetor é
                    // exibido.

    // Essa ideia implicado que o espaço reservado para o vetor mais seu
    // conteúdo é sequencial.
    printf("\n");
}


int main() {

    int vet[10] = {45,89,68,25,17,76,34,57,44};
    
    imprimir(vet, 10);


    return 0;
}