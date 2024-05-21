/*
Escreva um programa que calcula e informa a soma dos elementos primos de um
vetor de números inteiros.
*/

#include <stdio.h>

int isPrimo (int k) {
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
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Aqui esta a soma dos primos do array: ");

    int sum = 0;

    for (int j = 0; j < n; j++) {
        if (isPrimo(arr[j])) sum += arr[j];
    }

    printf("%d", sum);

    return 0;
}