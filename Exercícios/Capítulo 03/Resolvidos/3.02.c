#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
  // set idioma
  setlocale(LC_ALL, "Portuguese");

  // Vari�veis
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

  // c�lculo da m�dia
  media = (n1 + n2 + n3) / 3;

  // exibir c�lculo da m�dia
  printf("O valor da m�dia � %d.\n", media);

  return 0;
}
