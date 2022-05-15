/* Um exemplo de jogo-da-velha simples. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char matriz [3][3]; /* a matriz do jogo */

char check(void);
void init_matriz(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matriz(void);

void main(void)
{
    setlocale(LC_ALL, "Portuguese");

    char done;

    printf("Este � o jogo-da-velha.\n");
    printf("Voc� estar� jogando contra o computador.\n");

    done = ' ';
    init_matriz();
    do {
        disp_matriz();
        get_player_move();
        done = check(); /* verifica se h� vencedor */
        if (done != ' ') break; /* vencedor!*/
        get_computer_move();
        done = check(); /* verifica se h� vencedor */
    } while (done == ' ');
    if (done == 'X') printf("Voc� ganhou!\n");
    else printf("Eu ganhei!!!\n");

    disp_matriz(); /* mostra as posi��es finais */
}

/* Inicializa a matriz */
void init_matriz(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
        for (j= 0; j <3; j++) matriz[i][j] = ' ';
}

/* Obt�m a sua jogada */
void get_player_mova(void)
{
    int x, y;

    printf("Digite as coordenadas para o X: ");
    scanf("%d%d", &x, &y);

    x--; y--;

    if(matriz[x][y] != ' ') {
        printf("Posi��o inv�lida, tente novamente.\n");
        get_player_move();
    }
    else matriz[x][y] = 'X';
}

/* Obt�m uma jogada do computador */
void get_computer_move(void)
{
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            if(matriz[i][j] == ' ') break;
        if (matriz[i][j] == ' ') break;
    }

    if (i * j == 9) {
        printf("empate\n");
        exit(0);
    }
    else matriz[i][j] = 'O';

    /* Mostra a matriz na tela*/
    void disp_matriz(void)
    {
        int t;

        for (t = 0; t < 3; t++ ) {
            printf(" %c | %c | %c ", matriz[t][0], matriz[t][1], matriz[t][2]);
        if (t != 2 )printf("\n---|---|---\n");
        }
        printf("\n");
    }

    /* Verifica se h� um vencedor. */
    char check(void)
    {
        int i;

        for (i = 0; i < 3; i++) /* verifica as linhas */
            if(matriz[i][0] == matriz[i][1] &&
                matriz[i][0] == matriz[i][2]) return matriz[i][0];

        for (i = 0; i < 3; i++) /* verifica as colunas*/
            if (matriz[0][i] == matriz[1][i] &&
                matriz[0][1] == matriz[2][i]) return matriz[0][i];

        /* testa as diagonais */
        if (matriz[0][0] == matriz[1][1] &&
            matriz[1][1] == matriz[2][2])
                return matriz[0][0];
        if (matriz[0][2] == matriz[1][1] &&
            matriz[1][1] == matriz[2][0])
                return matriz[0][2];

        return ' ';
    }
}