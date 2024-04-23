/*
Escreva um programa que recebe como entrada um valor inteiro e positivo n. Em
seguida, o programa deve receber como entrada mais n valores, e informar:
- Quantos são positivos
- Quantos são negativos
- Quantos são pares
- Quantos são ímpares
- A soma dos valores
- A média dos valores
- O maior valor
- O menor valor
*/

#include <stdio.h>

void positivos(int numeros[], int k) {
    printf("Numeros positivos: ");

    for (int i = 0; i < k; i++){
        if (numeros[i] > 0) printf("%d ", numeros[i]);
    }

    printf("\n");
}

void negativos(int numeros[], int k) {
    printf("Numeros negativos: ");

    for (int i = 0; i < k; i++){
        if (numeros[i] < 0) printf("%d ", numeros[i]);
    }

    printf("\n");
}

void pares(int numeros[], int k) {
    printf("Numeros pares: ");

    for (int i = 0; i < k; i++){
        if (numeros[i] % 2 == 0) printf("%d ", numeros[i]);
    }

    printf("\n");
}

void impares(int numeros[], int k) {
    printf("Numeros impares: ");

    for (int i = 0; i < k; i++){
        if (numeros[i] % 2 == 1) printf("%d ", numeros[i]);
    }

    printf("\n");
}

void somatorio(int numeros[], int k) {
    int soma = 0;

    for (int i = 0; i < k; i++) {
        soma += numeros[i];
    }
    printf("A soma de todos os numeros tem valor de %d\n", soma);

}

void media(int numeros[], int k) {
    int soma = 0;
    float media;

    for (int i = 0; i < k; i++) {
        soma += numeros[i];
    }

    media = soma / k;

    printf("A media de todos os numeros tem valor de %.2f\n", media);

}

void menor(int numeros[], int k) {
    int menor = numeros[0];

    for (int i = 0; i < k; i++) {
        if (menor > numeros[i]) menor = numeros[i];
    }
    printf("O menor numero tem valor de %d\n", menor);

}

void maior(int numeros[], int k) {
    int maior = numeros[0];

    for (int i = 0; i < k; i++) {
        if (maior < numeros[i]) maior = numeros[i];
    }
    printf("O maior numero tem valor de %d\n", maior);

}


int main() {
    int n;

    printf("Digite o numero de valores a ser digitados: ");
    scanf("%d", &n);

    int numero[n];

    int contador = 0;

    do {
        printf("Valor %d: ", contador + 1);
        scanf("%d", &numero[contador]);

        contador += 1;
    } while (contador != n);


    printf("\n");    
    positivos(numero, n);
    printf("\n");
    negativos(numero, n);
    printf("\n");
    pares(numero, n);
    printf("\n");
    impares(numero, n);
    printf("\n");
    somatorio(numero, n);
    printf("\n");
    media(numero, n);
    printf("\n");
    menor(numero, n);
    printf("\n");
    maior(numero, n);
    printf("\n");


    return 0;
}