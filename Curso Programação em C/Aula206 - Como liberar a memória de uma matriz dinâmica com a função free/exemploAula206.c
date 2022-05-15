#include <stdio.h>
#include <time.h>
/* Aula 202: Como alocar uma matriz dinâmica?
 vetor de vetores ->    int* -> 10 27 32
                        int* -> 11 75 49
                        int* -> 43 82 10
                        int* -> 12 47 62
 */

int main() {
    // vetor de vetores
    int **mat, i, j;

    mat = malloc(4 * sizeof(int*));

    for(i = 0; i < 4; i++)
        mat[i] = malloc(3 * sizeof(int));
    
    srand(time(NULL));

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++)
            *(*(mat + i) + j) = rand() % 100;
            // mat[i][j] = rand() % 100;
    } 

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", *(*(mat + i) + j));
        printf("\n");
    }
    
    // librar memória da matriz
    for(i = 0; i < 5; i++)
        free(mat[i]);
    free(mat);

    return 0;
}