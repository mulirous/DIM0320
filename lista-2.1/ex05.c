/*
Escreva um programa que recebe como entrada um número inteiro e positivo n. Em
seguida, recebe n números e calcula a média aritmética dos números informados.
*/

#include <stdio.h>

int main() {
    int nums;
    int somador = 0, controle = 1;
    int valor;
    float media;

    printf("Numero de valores: ");
    scanf("%d", &nums);

    while (controle <= nums) {
        printf("numero %d: ", controle);
        scanf("%d", &valor);

        somador += valor;

        controle++;
    }

    media = somador / nums;

    printf("A media aritmetica dos valores tem valor de %.2f\n", media);
       


    return 0;
}