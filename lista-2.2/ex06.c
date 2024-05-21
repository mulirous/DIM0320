/*
Escreva um programa que verifica e informa ao usuário se um número específico
está presente ou não em um vetor de inteiros.
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

    int num, pos, vNum = 0;

    printf("Qual numero deseja verificar se ha no array: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            vNum = 1;
            pos = i;
            break;
        }
    }

    if (vNum) {
        printf("O numero %d foi encontrado na posicao %d do array", num, pos + 1);
    }

    return 0;
}