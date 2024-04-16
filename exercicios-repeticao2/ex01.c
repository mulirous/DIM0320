/*
Escreva um programa que recebe como
entrada um número n e imprime sua
tabuada
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero para exibir sua tabuada: ");
    scanf("%d", &n);

    int i = 1;

    while (i < 11) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}