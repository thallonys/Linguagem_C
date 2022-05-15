#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    Variáveis
    n = nota
    p = peso
    */
   float n1, n2, n3, p1 = 2, p2 = 3, p3 = 5, media;

   // limpa tela
   system("cls || clear");

   // input
   printf("Informa a nota do Trabalho de laboratório: ");
   scanf("%f%*c", &n1);
   printf("Informe a nota da Avaliação semestral: ");
   scanf("%f%*c", &n2);
   printf("Informe a nota do Exame final: ");
   scanf("%f%*c", &n3);

   // cálculo da média
   media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

   // exibir media seguido do conceito de cada intervalo da nota
   if (media >= 0 && media < 5)
   {
       printf("A média é %.2f e o coneito é E.\n", media);
   }
   else if (media >= 5 && media < 6)
   {
       printf("A média é %.2f e o coneito é D.\n", media);
   }
   else if (media >= 6 && media < 7)
   {
       printf("A média é %.2f e o coneito é C.\n", media);
   }
   else if (media >= 7 && media < 8)
   {
       printf("A média é %.2f e o coneito é B.\n", media);
   }
   else if (media >= 8 && media <= 10)
   {
       printf("A média é %.2f e o coneito é A.\n", media);
   }

    printf("\n");
    
    return 0;
}