#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    // pAumento = percentual de aumento
    // vAumento = valor aumento
    // nSalario = novo sal�rio
    float salario, pAumento, vAumento, nSalario;

    // limpa tela
    system("cls || clear");

    // input
    printf("Informe o sal�rio atual: ");
    scanf("%f%*c", &salario);

    printf("Informe o percentual de aumento: ");
    scanf("%f*c", &pAumento);

    // C�lculo no novo sal�rio
    vAumento = salario * pAumento / 100;
    nSalario = salario + vAumento;

    // exibir valor aumento e novo sal�rio
    printf("O valor do aumento � R$ %.2f"
            " e o valor do novo sal�rio � R$ %.2f.\n\n",
            vAumento, nSalario);
    return 0;
}