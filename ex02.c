/*
Escreva um programa que recebe como entrada um número inteiro e calcula seu fatorial.
O programa deve exibir uma mensagem de erro caso seja informado um número negativo.
*/

#include <stdio.h>

int main() {
    int num, controle = 1;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(controle != num + 1) {
        fatorial = fatorial * controle;

        controle++;
    }

    printf("O fatorial de %d tem o valor de %d", num, fatorial);

    return 0;

}