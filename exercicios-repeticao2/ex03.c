/*
Modifique o exercício anterior para somar apenas os números pares
informados. (Modificação do ex02.c)
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite a quantidade de numeros a ser somada: ");
    scanf("%d", &n);

    int i = 0;
    int soma = 0, pares = 0;
    int num;

    while (i < n) {
        printf("num %d: ", i + 1);
        scanf(" %d", &num);

        if (num % 2 == 0) {
            soma += num;
            pares++;
        } 
        i++;
    }

    printf("A soma dos %d numeros pares entre os %d numeros tem valor igual a %d", pares, n, soma);

    return 0;
}