/*
Modifique o exercício anterior adicionando uma verificação, antes da
estrutura de repetição, se n é realmente menor que m. Caso não seja,
inverta os valores das duas variáveis.
*/

#include <stdio.h>

int main() {
    int a, b;
    int aux, aux1;

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
        aux = b;
        b = a;
        a = aux;
        while (aux <= b) {
            printf("%d ", aux);
            aux++;
        }
    } 
    else printf("Os dois numeros sao iguais\n");


    return 0;
}