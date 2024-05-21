/*
Escreva um programa que pede para que o usuário informe um número inteiro n e,
em seguida, n número inteiros a serem armazenados em um vetor. Em seguida, o
programa deve imprimir os números digitados na ordem inversa de inserção.
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

    printf("\nAqui esta o array de numeros de tras pra frente:\n");

    for (int j = n - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }

    return 0;
}