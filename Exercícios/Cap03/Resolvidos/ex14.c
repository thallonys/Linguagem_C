#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int anoNasc; // ano nascimento
    int anoAtual;
    int idade;
    int qtdAnos; // quantidades de anos

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe o ano de nascimento: ");
    scanf("%d%*c", &anoNasc);

    printf("%s", "Informe o ano atual: ");
    scanf("%d%*c", &anoAtual);

    // c�lculo
    idade = anoAtual - anoNasc;
    qtdAnos = 2050 - anoNasc;

    // limpta tela
    system("cls || clear");

    // output
    printf("A idade � %d.\n"
            "A quantidade de anos at� 2050 � %d.\n",
            idade, qtdAnos);
}