#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "Portuguese");

	char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

	printf("Digite seu nome: ");

	 fgets(palavras, 55, stdin);

	int i = 0;
	while (palavras[i] != '\0')
		printf("%d = %d\n", i, palavras[i++]);
	printf("\n");

	return 0;
}
