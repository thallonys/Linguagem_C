#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    Vari�veis
    n = nota
    p = peso
    */
   float n1, n2, n3, p1 = 2, p2 = 3, p3 = 5, media;

   // limpa tela
   system("cls || clear");

   // input
   printf("Informa a nota do Trabalho de laborat�rio: ");
   scanf("%f%*c", &n1);
   printf("Informe a nota da Avalia��o semestral: ");
   scanf("%f%*c", &n2);
   printf("Informe a nota do Exame final: ");
   scanf("%f%*c", &n3);

   // c�lculo da m�dia
   media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

   // exibir media seguido do conceito de cada intervalo da nota
   if (media >= 0 && media < 5)
   {
       printf("A m�dia � %.2f e o coneito � E.\n", media);
   }
   else if (media >= 5 && media < 6)
   {
       printf("A m�dia � %.2f e o coneito � D.\n", media);
   }
   else if (media >= 6 && media < 7)
   {
       printf("A m�dia � %.2f e o coneito � C.\n", media);
   }
   else if (media >= 7 && media < 8)
   {
       printf("A m�dia � %.2f e o coneito � B.\n", media);
   }
   else if (media >= 8 && media <= 10)
   {
       printf("A m�dia � %.2f e o coneito � A.\n", media);
   }

    printf("\n");
    
    return 0;
}