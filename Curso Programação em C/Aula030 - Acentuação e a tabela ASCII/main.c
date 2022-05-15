#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Tabela ASCII e acentuação
1 byte (8 bits) -> -128 até 127
unsigned 1 byte -> até 255

9 é o caractere de tabulação \t.
10 é o caractere de nova linha \n (enter).
65 é a letra A maiúscula.
66 é a lietra B maiúscula.
90 é a letra Z maiúscula.

1ª = setelocale (LC_ALL, NULL); // padrão da linguagem C
2ª = setelocale (LC_ALL, ""); // padrão do sistema operacional
3ª = setelocale (LC_ALL, "Portuguese"); // português brasileiro
*/

int main()
{
    printf("%s\n", setlocale(LC_ALL, "Portuguese"));
    
    char letra = 'f';
    // char letra2 = 'ç';

    printf("%d\n", letra);
    //printf("%c", letra2);

    printf("Coração\n");

    return 0;
}