/*
Escreva um programa que imprime todos os números inteiros de 1 a
100, inclusive (ou seja, incluindo 1 e o 100)
*/

#include <stdio.h>

int main() {
    int n = 0;

    printf("Aqui estao todos os numero de 1 ate o 100:\n");

    do {
        n++;
        printf("%d\n", n);
    } while (n <= 99);

    return 0;
}