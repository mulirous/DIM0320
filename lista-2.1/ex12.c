/*
Escreva um programa que imprime a tabuada de todos os números inteiros de 0 a 9,
utilizando estruturas de repetição aninhadas.
*/

#include <stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");
        printf("=         TABUADA DO %d         =\n");
        printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");

        for (int j = 0; j <= 10; j++) {
            printf("       +=+=+=+=+=+=+=+=+\n");
            printf("           %d x %d = %d\n", i, j, i * j);
            printf("        +=+=+=+=+=+=+=+=+\n");
        }

    printf("\n") ;
    }

    return 0;
}