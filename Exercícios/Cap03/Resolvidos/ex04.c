#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // set idioma
    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    float salario, nSalario, aumento = 15;
    system("cls || clear"); // limpa tela
    // input
    printf("Informe o sal�rio atual: ");
    scanf("%f%*c", &salario);

    // c�lculo do novo sal�rio
    nSalario = salario + (salario * (aumento / 100));

    // exibir novo sal�rio
    printf("O novo sal�rio � %.2f.\n", nSalario);


    return 0;
}