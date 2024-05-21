/*
Escreva um programa que encontra e imprime a moda de um vetor, isto é, o
elemento que mais se repete. (Dica: utilizem estruturas de repetição aninhadas)
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

    int maxCount = 0;
    int moda = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            moda = arr[i];
        }
    }

    printf("A moda do vetor tem valor de: %d\n", moda);

    return 0;
}