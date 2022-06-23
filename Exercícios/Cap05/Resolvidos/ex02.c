#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    // set locale
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int N = 0;
    float E = 1;
    float aux = 0;
    int fatorial = 1;

    // limpa tela
    system("cls || clear");

    // input
    printf("%s", "Informe a quantidade de repetição: ");
    scanf("%d%*c", &N);

    for (int i = 1; i <= N; i++)
    {
        fatorial = fatorial * i;
        aux = aux + (1 / fatorial);
        E = E + aux; 
        
    printf("Valor do fatorial %d.\n", fatorial);
    printf("O valor de E é %f.\n", E);
    }
    
}
