#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

/*
Lendo uma string com a funÃ§Ã£o scanf()
*/
int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	char palavras[100];

	printf("Digite seu nome: ");
	// scanf("%s", palavras);	// Para leitura de strings não é necessário colocar &.
	// scanf("%[^\n]", palavras); // Lê tudo até a tecla ENTER (\n).
							   // É possível configurar a limitação de caracteres lidos: %10[^\n] -> Lê até 10 caracteres.
    // gets(palavras); // Função insegura. Não é recomendável utilizá-la.

    fgets(palavras, 100, stdin); // file
	printf("%s\n\n", palavras);
	return 0;
}
