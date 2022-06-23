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
    */
    float n1, n2, n3, n4, media;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe a nota 1: ");
    scanf("%f%*c", &n1);
    printf("%s", "Informe a nota 2: ");
    scanf("%f%*c", &n2);
    printf("%s", "Informe a nota 3: ");
    scanf("%f%*c", &n3);

    // cÃ¡lculo da mÃ©dia
    media = (n1 + n2 + n3) / 3;

    // exibir nota seguido de mensagen
    if (media >= 0 && media < 3)
    {
        printf("A média é %.2f. - REPROVADO\n", media);
    }
    else if (media >= 3 && media < 7)
    {
        printf("A média é %.2f. - EXAME\n", media);
            
            if (media >= 3 && media < 7)
            {
                n4 = 12 - media;
                printf("Deve tirar nota %.2f para ser aprovado.\n", n4);
            }
    }
    else if (media >= 7 && media <= 10)
    {
        printf("A média é %.2f. - APROVADO\n", media);
    }

    printf("\n");

    return 0;
}