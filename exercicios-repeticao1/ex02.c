/*
Escreva um programa que recebe como entrada dois números, n e m,
e imprime todos os números entre n e m, inclusive.
Exemplo 1:
Entrada: 0 5
Saída: 0 1 2 3 4 5
Exemplo 2:
Entrada: -3 1
Saída: -3 -2 -1 0 1
*/

#include <stdio.h>

int main() {
    int a, b;
    int aux;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if ( a < b) {
        aux = a;
        while (aux <= b) {
            printf("%d ", aux);
            aux++;
        }
    } 
    else if (a > b) {
        aux = a;
        while (aux >= b) {
            printf("%d ", aux);
            aux--;
        }
    } 
    else printf("Os dois numeros sao iguais\n");


    return 0;
}