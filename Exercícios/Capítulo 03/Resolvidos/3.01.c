#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
  setlocale(LC_ALL, "Portuguese");

  // Variáveis
  // n = número
  // result = resultado
  int n1, n2, n3, n4, result;

  // limpa tela
  system("cls || clear");

  // input
  printf("%s", "Insira o primeiro número: ");
  scanf("%d%*c", &n1);

  printf("%s", "Insira o segundo número: ");
  scanf("%d%*c", &n2);

  printf("%s", "Insira o terceiro número: ");
  scanf("%d%*c", &n3);

  printf("%s", "Insira o quarto número: ");
  scanf("%d%*c", &n4);

  // cáculo da soma
  result = n1 + n2 + n3 + n4;

  // mostrar resultado da soma
  printf("O resultado da soma é %d.", result);

  return 0;
}
