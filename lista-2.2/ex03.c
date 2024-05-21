/*
Escreva um programa capaz de informar o número de elementos pares e ímpares
em um vetor de inteiros.
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

    printf("Aqui estao os numeros do array:\n ");

    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);

        if (arr[j] % 2 == 0) printf("eh par\n");
        else printf("eh impar\n");
    }


    return 0;
}