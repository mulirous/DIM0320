/*
Escreva um programa que recebe como entrada um número inteiro e positivo n e informa
se n é um número primo ou não
*/

#include <stdio.h>

int primo(int k) {
    if ( k > 1) {
        int numero = 2;
        do {
            if (k != numero && k % numero == 0) return 0;
            k += 1;
        } while (k < numero);
        return 1;
    }
    else return 0;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (primo(numero)) printf("O numero %d eh um primo\n", numero);
    else printf("O numero %d nao eh um primo\n", numero);

    return 0;
}