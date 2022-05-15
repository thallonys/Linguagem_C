#include <stdio.h>
#include <stdlib.h>

// Estrutura para criar um nó da lista
typedef struct no {
    int valor;
    struct no *proximo; // Ponteiro que aponta para um tipo no.
                        // Note que é do mesmo tipo da estrutura no que a cotem.
                        // Assim, funciona como recursividade.
} No;

// Estrutura para criar uma lista
// Aqui não é coloca o nome depois de struct porque
// "não vou ter um ponteiro para lista."
// Essa estrutua tem a finalidade de guardar o endereço
// do último elemento inserido e bem como a quantidade de
// elementos inseridos.
typedef struct {
    No *inicio; // Struct de struct com ponteiro
    int tam;
} Lista;


// Aqui é passado como parametro para a mudança não ser perdida
void inserirInicio(Lista *lista, int valor) {
    // Tem que ser pontiro para não ser perdido ao longo da execução
    No *novo = (No*)malloc(sizeof(No)); // O malloc de resevar o tamanho
               // casting               // do tipo No e retornar o endereço
                                        // de memória. Isso é feito com o 
                                        // casting.
    // Essa declaração modifica a struct NO (linha 5-10) para receber
    // o novo valor inserido pelo usuário. Note que, como se trata de
    // um ponteiro fazendo essa alteração, deve ser usado uma seta em 
    // vez do ponto para acessar os elementos da struct NO.
    novo->valor = valor;

    // Aqui é o mesmo procedimento. O ponteiro "novo" modifica o
    // elemento da struct "NO", "proximo", que o faz apontar para
    // o endereço do novo "nó" inserido pela struct "Lista" no
    // elemento "inicio".
    novo->proximo = lista->inicio;

    // Aqui o ponteiro "novo" da struct "Lista" recebe o endereço
    // do novo elemento inserido pelo usuário. Definindo o apontado
    // para o último elemento inserido.
    lista->inicio = novo;
    lista->tam++; // incrementa a quantidade
}

void inserirFim(Lista *lista, int valor) {
    No *no, *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;

    if(lista->inicio == NULL) {
        lista->inicio = novo;
    }
    else {
        no = lista->inicio;
        while(no->proximo != NULL) {
            no = no->proximo;
        }
        no->proximo = novo;
    }
    
    lista->tam++;
}

void imprimir(Lista *lista) {
    No *inicio  = lista->inicio;
    printf("Tamano da lista: %d\n", lista->tam);
    while(inicio != NULL) {
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}


int main() {

    // Instancia a struct Lista.
    Lista lista;

    // Inicializa os componentes da Lista
    lista.inicio = NULL;
    lista.tam = 0;

    int opcao = 0;
    int valor = 0;
    do{
        printf("1 - Inserir no inicio\n2 - Imprimir\n3 - Inserir no final\n5 - Sair\n");
        scanf("%d", &opcao);
            
        switch(opcao) {
            case 1:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;
            case 2:
                imprimir(&lista);
                break;
            case 3:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;
            case 5:
                printf("Finalizando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
            }

    } while(opcao != 5);

    return 0;
}