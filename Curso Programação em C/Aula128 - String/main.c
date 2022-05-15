#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

/*
O que é uma string?
*/
int main(void)
{
	// setlocale(LC_ALL, "Portuguese");

	char palavras[] = {"Oi! Vamos aprender a programar com a linguagem C?"};

	printf("%s\n", palavras);
	return 0;
}
