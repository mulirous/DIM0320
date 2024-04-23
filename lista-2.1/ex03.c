/*
Escreva um programa que recebe como entrada um número inteiro n e soma todos os
números pares de 0 a n.
*/

#include <stdio.h>

int main() {
    int n;
    int somador = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if ((i % 2) == 0) {
            somador = somador + i;
        }
    }

    printf("A soma de todos os numeros pares de 1 ate %d tem o valor de %d", n, somador);

    return 0;
}