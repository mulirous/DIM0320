/*
Escreva um programa que recebe como entrada um número inteiro
positivo n e soma todos os números inteiros de 1 a n.
Exemplo 1:
Entrada: 5
Saída: A soma dos números inteiros de 0 a 5 é igual a 15.
Exemplo 2:
Entrada: 100
Saída: A soma dos números inteiros de 0 a 100 é igual a 5050.
*/

#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    int contador = 0;

    printf("Digite um numero qualquer: ");
    scanf("%d", &n);

    while (contador <= n) {
        soma += contador;
        contador++;
    }

    printf("A soma dos numero inteiros de 0 a %d e igual a %d", n, soma);


    return 0;
}