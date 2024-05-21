/*
Escreva um programa que encontra e imprime o valor do segundo maior elemento
de um vetor de inteiros.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int arr[n];

    if (n < 2) {
        printf("O array tem que ter ao menos 2 elementos");
        return 1;
    }

    printf("Agora digite os %d numeros\n", n);

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maior, segMaior;

    if (arr[0] > arr[1]) {
        maior = arr[0];
        segMaior = arr[1];
    }
    else {
        maior = arr[1];
        segMaior = arr[0];
    }

    for (int j = 2; j < n; j++) {
        if (arr[j] > maior) {
            segMaior = maior;
            maior = arr[j];
        }
        else if (arr[j] > segMaior && arr[j] != maior) {
            segMaior = arr[j];
        }
    }

    printf("O segundo maior elemento do array tem valor de %d", segMaior);

    return 0;
}