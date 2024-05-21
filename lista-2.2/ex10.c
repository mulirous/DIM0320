/*
Escreva um programa que encontra e imprime o segundo menor elemento em um
vetor de inteiros.
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

    int menor, segMenor;

    if (arr[0] < arr[1]) {
        menor = arr[0];
        segMenor = arr[1];
    }
    else {
        menor = arr[1];
        segMenor = arr[0];
    }

    for (int j = 2; j < n; j++) {
        if (arr[j] < menor) {
            segMenor = menor;
            menor = arr[j];
        }
        else if (arr[j] > segMenor && arr[j] != menor) {
            segMenor = arr[j];
        }
    }

    printf("O segundo maior elemento do array tem valor de %d", segMenor);

    return 0;
}