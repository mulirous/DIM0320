/*
Altere o programa do exercício anterior para que, após executar a
operação desejada, o programa imprima novamente o menu
principal e continue interagindo com o usuário, até que a opção
“Sair” seja escolhida.
*/

#include <stdio.h>
#include <math.h>

void opcoes() {
    printf("++++++++++++++++++++++++++++\n");
    printf("++          1 - SOMA      ++\n");
    printf("++      2 - DIVISAO       ++\n");
    printf("++          3 - POTENCIA  ++\n");
    printf("++      4 - RAIZ QUADRADA ++\n");
    printf("++          0 - SAIR      ++\n");
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

    printf("CALCULADORA V2\n\n\n");

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

    printf("Saindo...\n\n");

    return 0;
}