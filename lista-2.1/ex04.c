/*
Escreva um programa que recebe como entrada dois números inteiros n e m e calcula n
m
utilizando apenas estruturas de repetição (não usem a biblioteca math.h).
*/

#include <stdio.h>

int main() {
    int num, pot;
    int valor;

    printf("Voce quer o numero ");
    scanf("%d", &num);
    printf("elevado a ");
    scanf("%d", &pot);

    valor = 1;



    for (int i = 0; i < pot; i++) valor = valor * num;

    printf("\n%d ^%d = %d", num, pot, valor);

    return 0;
}