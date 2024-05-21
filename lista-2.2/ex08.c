/*
Escreva um programa que calcula a soma dos elementos nas posições pares de um
vetor de números inteiros.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int arr[n];

    if (n < 0) {
        printf("O numero eh invalido");
        return 1;
    }

    printf("Agora digite os %d numeros\n", n);

    for (int i = 0; i < n; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Aqui esta a soma das posicoes pares do array: ");

    int sum = 0;

    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) sum += arr[j];
    }

    printf("%d", sum);

    return 0;
}