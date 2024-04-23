/*
Escreva um programa que recebe como entrada um inteiro positivo n, e em seguida
desenha um triângulo de asteriscos com n linhas.
(Dica: tente encontrar uma relação entre o número de asteriscos e de espaços em branco
antes do primeiro asterisco de cada linha ao número da linha)
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de linhas que voce quer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - (i + 1); j++){
            printf(" ");
        }
        for(int k = 0; k < (2 * (i + 1)) - 1; k++){
            printf("*");
        }
        for (int j = 0; j < n - (i + 1); j++){
            printf(" ");
        }
        printf("\n");
    }


    return 0;
}