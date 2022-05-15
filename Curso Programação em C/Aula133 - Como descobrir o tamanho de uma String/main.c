#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int tam = 0;
    int i = 0;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");

    fgets(palavras, 55, stdin);

    i = 0;
    while(palavras[i] != '\0')
    {
        if(palavras[i] == '\n')
            palavras[i] = '\0';
        i++;
    }
    // \n é o ENTER
    // \0 é fim da string
    // Então, quando é feito o while acima, o \n vai ter prioridade em vez do \0. Assim, não é contado o último caractere da string, o \0.

    i = 0;
    while (palavras[i] != '\0')
    {
        // printf("%d = %d\n", i, palavras[i++]);
        tam++;
        i++;
    }
    printf("Tamanho: %d\n", tam);

    return 0;
}
