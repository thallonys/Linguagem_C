#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 
{
  setlocale(LC_ALL, "Portuguese");

  // Vari�veis
  // n = n�mero
  // result = resultado
  int n1, n2, n3, n4, result;

  // limpa tela
  system("cls || clear");

  // input
  printf("Insira o primeiro n�mero: ");
  scanf("%d%*c", &n1);

  printf("Insira o segundo n�mero: ");
  scanf("%d%*c", &n2);

  printf("Insira o terceiro n�mero: ");
  scanf("%d%*c", &n3);

  printf("Insira o quarto n�mero: ");
  scanf("%d%*c", &n4);

  // c�culo da soma
  result = n1 + n2 + n3 + n4;

  // mostrar resultado da soma
  printf("O resultado da soma � %d.\n", result);

  return 0;
}
