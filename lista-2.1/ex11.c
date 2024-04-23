/*
Modifique a questão anterior para imprimir um triângulo vazio por dentro.
(Dica: tente encontrar uma relação entre o número de asteriscos, o número de espaços em
branco antes do primeiro asterisco e o número de espaços em branco entre o primeiro e o
último asterisco de cada linha ao número da linha)
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

        printf("*");

        if (i > 0 && i < n - 1) {
            for (int k = 0; k < 2 * i - 1; k++) {
                printf(" ");
            }
            printf("*");
        } else if (i == n - 1) {
            for (int k = 0; k < 2 * (n - 1); k++) {
                printf("*");
            }
        }

        for (int j = 0; j < n - (i + 1); j++){
            printf(" ");
        }
        printf("\n");
    }


    return 0;
}