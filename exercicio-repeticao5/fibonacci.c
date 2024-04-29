/*
Escreva um programa que, dado um número inteiro e positivo n,
imprime os n primeiros termos da sequência de Fibonacci, em que
cada termo, depois dos dois primeiros, é igual à soma dos dois
termos anteriores.
Por exemplo, para a entrada “10”, a saída deve ser:
0 1 1 2 3 5 8 13 21 34
isto é, os 10 primeiros números da sequência de Fibonacc
*/

#include <stdio.h>

int main() {
    int a = 0, b = 1;
    int termo;

    printf("Quantos termos de Fibonacci voce deseja: ");
    scanf("%d", &termo);

    if (termo == 1) printf("%d \n", a);
    else if (termo == 2) printf("%d %d \n", a, b);
    else {
        int c;

        printf("%d %d ", a, b);

        for (int i = 2; i < termo; i++) {

            c = a + b;
 
            printf("%d ", c);

            a = b;
            b = c;
        }        
    }


}