/*
Escreva um programa que recebe como entrada um número inteiro
positivo n. Em seguida, o programa deve receber como entrada n
números e informar a soma dos números informados
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite a quantidade de numeros a ser somada: ");
    scanf("%d", &n);

    int i = 0;
    int soma = 0;
    int num;

    while (i < n) {
        printf("num %d: ", i + 1);
        scanf(" %d", &num);
        soma += num;
        i++;
    }

    printf("A soma dos %d num(s) tem valor igual a %d", n, soma);

    return 0;
}