#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

/*
Lendo uma string com a função scanf()
*/
int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	char palavras[100];

	printf("Digite seu nome: ");
	// scanf("%s", palavras);	// Para leitura de strings n�o � necess�rio colocar &.
	scanf("%[^\n]", palavras); // L� tudo at� a tecla ENTER (\n).
							   // � poss�vel configurar a limita��o de caracteres lidos: %10[^\n] -> L� at� 10 caracteres.

	printf("%s\n\n", palavras);
	return 0;
}
