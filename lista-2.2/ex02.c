/*
Escreva um programa que calcula a soma de todos os números de um vetor.
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
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Aqui esta a soma do array: ");

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }

    printf("%d", sum);

    return 0;
}