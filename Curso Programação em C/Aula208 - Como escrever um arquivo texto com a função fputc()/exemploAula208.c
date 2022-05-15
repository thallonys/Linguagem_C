#include <stdio.h>
#include <stdlib.h>

/* Como escrever em arquivo texto com a função fputc?

    Modos de abertura de arquivos:
    w -> Escrita
    r -> leitura
    a -> anexar
    r+ -> leitura e escrita
    w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
    a+ -> leitura e escrita (adiciona ao final do arquivo)

*/
int main()
{

    FILE *file;
    char letra;

    // função para abrir arquivo
    // parametros: "nome do arquio ou caminho para o arquivo","modo de abertura do arquivo"
    file = fopen("conto.txt", "w");

    if (file)
    {
        printf("\nDigite um texto e pressione ENTER ao finalizar!");
        scanf("%c", &letra);
        while (letra != '\n') // Loop necessário para ser inserido no arquivo caractere por caractere
        {
            fputc(letra, file); // Escreve no arquivo
            scanf("%c", &letra);
        }
        fclose(file); // Fecha o arquivo
    }
    else
    {
        printf("\n\t--> Erro ao abrir aquivo!\n");
    }

    return 0;
}