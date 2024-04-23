/*
Escreva um programa que imprime um menu com as seguintes opções:
- Fazer a soma de dois números
- Fazer a divisão de dois números (o segundo não pode ser zero)
- Elevar um número a outro
- Calcular a raiz quadrada de um número
- Sair do programa
- O programa deve receber como entrada um número correspondente à
opção desejada e realizar a operação relacionada. por exemplo, se a opção
desejada for a primeira, o programa deve receber mais dois números,
calcular sua soma e imprimir o resultado.
- O programa deve imprimir o menu repetidamente até que uma opção
válida seja digitada
*/

#include <stdio.h>
#include <math.h>

void opcoes() {
    printf("++++++++++++++++++++++++++++\n");
    printf("++          1 - SOMA      ++\n");
    printf("++      2 - DIVISAO       ++\n");
    printf("++          3 - POTENCIA  ++\n");
    printf("++      4 - RAIZ QUADRADA ++\n");
    printf("++++++++++++++++++++++++++++\n");
    printf("\n\n");
}

void soma() {
    float a, b;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);

    printf("%.1f + %.1f = %.1f", a, b, a + b);
}

void divisao() {
    float a, b;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b);

    printf("%.1f / %.1f = %.1f", a, b, a/b);
}

void potencia() {
    float a, b;
    printf("Primeiro numero: ");
    scanf("%f", &a);
    printf("Segundo numero: ");
    scanf("%f", &b); 

    printf("%.1f ^%.1f = %.1f", a, b, pow(a, b));  
}

void raiz() {
    float a;
    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("A raiz quadrada de %.1f tem o valor de %.3f aproximadamente", a, sqrt(a));
}


int main() {
    int op;

    printf("CALCULADORA V1\n\n\n");

    do {
        opcoes();

        printf("Digite uma opcao: ");
        scanf("%d", &op);

        switch (op) {
        case 1: soma(); break;

        case 2: divisao(); break;

        case 3: potencia(); break;

        case 4: raiz(); break;

        default: break;
        }

        printf("\n\n");

    } while (op == 1 || op == 2 || op == 3 || op == 4);

    printf("Opcao invalida. Reinicie a calculadora.\n\n");

    return 0;
}