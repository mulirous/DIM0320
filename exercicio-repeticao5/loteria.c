/*
- Crie um programa que gera um número aleatório entre 1 e 100.
- Em seguida, o programa deve pedir repetidamente para o usuário
  tentar acertar o número, sempre informando se a tentativa está mais
  alta ou mais baixa que o número correto.
- Ao acertar o valor correto, o programa deve informar quantas
  tentativas foram necessárias para o acerto.
- Utilizem um while infinito e break.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
srand(time(NULL));
int num;

num = rand() % 101;

while(1) {
    int n;
    printf("Digite um numero de 1 a 100: ");
    scanf("%d", &n);

    if (n <= 100 && n >= 0) {
        if (n == num) {
            printf("Voce acertou! Voce ganhou na loteria!!!\n");
            break;
        }
        else if (n > num) {
            if (n < num + 10) printf("Eita! Foi quase... Mas acho que um pouquinho menos!\n");
            else printf("O numero tem o valor menor que esse hein...\n");
        }
        else if (n < num) {
            if (n > num - 10) printf("Vixe, quase que voce acerta.. So que um tiquinho mais, viu?\n");
            else printf("O numero tem o valor maior que esse, viu?\n");
        }     
    }
    else printf("O numero nao eh valido, tente novamente.\n");
}


return 0;
}