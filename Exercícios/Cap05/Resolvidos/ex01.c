#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    /*
    vari�veis
    salarioIni = salario inicial
    salarioRj = salario reajustado
    */
    float salarioIni = 1000, salarioRj, aumento = 15; 
    int anoAtual;
    // limpa tela
    system("cls || clear");

    printf("Informe o ano atual: ");
    scanf("%d%*c", &anoAtual);

    // c�lculo do sal�rio reajustado at� atualmente
    // ajuste em 2006
    salarioRj = salarioIni + (aumento / 1000) * salarioIni;

    // ajuste em 2007 em diante
    for (int i = 2007; i <= anoAtual; i++)
    {
        aumento = aumento * 2;
        salarioRj = salarioRj + (salarioRj * (aumento / 1000));
    }

    // exibir sal�rio reajustado atualmente
    printf("O sal�rio reajustado atualmente � R$ %.2f.\n", salarioRj);

    printf("\n");

    return 0;
}