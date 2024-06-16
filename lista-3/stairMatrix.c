#include <stdio.h>
#include <stdlib.h>

int ehEscada(int rows, int cols, int **matrix) {
    for (int i = 0; i < rows; i++) {
        int firstNonZero = -1;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                firstNonZero = j;
                break;
            }
        }
        
        if (firstNonZero == -1) {
            for (int k = i + 1; k < rows; k++) {
                for (int l = 0; l < cols; l++) {
                    if (matrix[k][l] != 0) return 0;
                }
            }
            break;
        } else {
            for (int k = i + 1; k < rows; k++) {
                for (int l = 0; l <= firstNonZero; l++) {
                    if (matrix[k][l] != 0) return 0;
                }
            }
        }
    }
    return 1;
}

int main() {
    int rows, cols;

    while (1) {
        printf("Insira o numero linhas e colunas, respectivamente\n");

        printf("Linhas: ");
        scanf("%d", &rows);

        printf("Colunas: ");
        scanf("%d", &cols);

        if (cols > 500 || rows > 500 || cols <= 0 || rows <= 0) {
            printf("Sua matriz nao eh valida, tente novamente!\n");
            continue;
        }

        int **matrix = (int **)calloc(rows, sizeof(int *));
        for (int i = 0; i < rows; i++) {
            matrix[i] = (int *)calloc(cols, sizeof(int));
        }

        printf("Agora, insira os elementos da sua matriz (%dx%d)\n", rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        int verify = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] < 0 || matrix[i][j] > 105) {
                    verify = 1;
                    break;
                }
            }
            if (verify) break;
        }

        if (verify) {
            printf("Sua matriz nao eh valida, tente novamente.\n");
            for (int i = 0; i < rows; i++) {
                free(matrix[i]);
            }
            free(matrix);
            continue;
        } else {
            printf("%d\n", ehEscada(rows, cols, matrix));
            for (int i = 0; i < rows; i++) {
                free(matrix[i]);
            }
            free(matrix);
            break;
        }
    }

    return 0;
}
