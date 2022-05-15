#include <stdio.h>
#include <stdlib.h>

// É possível ponteiro para struct?

typedef struct {
        int dia, mes, ano;
    } Data;

// Aqui o endereço de memória passa como parâmetro.
// E se torna um ponteiro do tipo Data no parâmetro.
void imprimirData(Data *x) {
    // Aqui, para que ocorra o acesso a struct Data pelo ponteiro
    // é necessário o uso de -> em de de . para executar o procedimento
    // corretamente.
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main() {

    Data data;
    // variável tipo p do tipo Data (Só que é um ponteiro)
    Data *p;

    // Essa atribuição só está correta ao passar o endereço 
    p = &data;

    // Exibir o endereço de memória de data e p
    printf("data: %p\tp: %p\n", &data, p);

    data.dia = 29;
    data.mes = 2;
    data.ano = 2021;

    // Aqui é passado como parâmetro para o chamamento da função
    // o ponteiro p que tem o endereço de data. (ir para a função imprimirData())
    imprimirData(p);

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);

    return 0;
}