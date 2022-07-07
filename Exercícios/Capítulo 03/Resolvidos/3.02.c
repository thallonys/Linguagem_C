#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
  // set idioma
  setlocale(LC_ALL, "Portuguese");

  // Variáveis
  // n = nota
  int n1, n2, n3, media;

  // limpa tela
  system("cls || clear");

  // input
  printf("%s", "Insira a primeira nota: ");
  scanf("%d%*c", &n1);

  printf("%s", "Insira a segunda nota: ");
  scanf("%d%*c", &n2);

  printf("%s", "Insira a terceira nota: ");
  scanf("%d%*c", &n3);

  // cálculo da média
  media = (n1 + n2 + n3) / 3;

  // exibir cálculo da média
  printf("O valor da média é %d.\n", media);

  return 0;
}
