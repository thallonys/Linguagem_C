#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
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

    // cálculo
    idade = anoAtual - anoNasc;
    qtdAnos = 2050 - anoNasc;

    // limpta tela
    system("cls || clear");

    // output
    printf("A idade é %d.\n"
            "A quantidade de anos até 2050 é %d.\n",
            idade, qtdAnos);
}