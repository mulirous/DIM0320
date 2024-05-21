/*
Escreva um programa capaz de inverter (não apenas imprimir na ordem inversa!) os
valores de um vetor.
*/

#include <stdio.h>

void inverterVetor(int arr[], int n) {
    int aux;
    for (int i = 0; i < n / 2; i++) {
        aux = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = aux;
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O vetor deve ter ao menos 2 elementos\n");
        return 1;
    }

    int arr[n];

    printf("Agora digite os %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    inverterVetor(arr, n);

    printf("O vetor invertido eh:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}