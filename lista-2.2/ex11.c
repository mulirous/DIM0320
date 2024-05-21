/*
Escreva um programa que calcula o produto escalar de dois vetores de tamanho n
*/

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[n];

    if (n < 0) {
        printf("O numero eh invalido");
        return 1;
    }

    printf("Agora digite os %d numeros\n", n);

    printf("\nArray 1\n");
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    printf("\nArray 2\n");
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i] * arr2[i];
    }

    int sumP = 0;

    for (int i = 0; i < n; i++) {
        sumP += arr3[i];
    }

    printf("O produto escalar tem o valor de %d", sumP);

    return 0;
}