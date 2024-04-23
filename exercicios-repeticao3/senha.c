/*
Escreva um programa que possui uma variável do tipo inteiro
chamada senha.
- Inicialize essa variável no código com algum valor, escolhido por
você.
- O programa deve repetidamente pedir que o usuário digite a senha,
até que a senha correta seja digitada.
*/



#include <stdio.h>

int main() {
    int senha;

    do {

        printf("Senha-> ");
        scanf("%d", &senha);
    
    } while (senha != 1234);
    
    printf("\nVoce acertou a senha, agora voce tem acesso ao sistema.\n");

    return 0;
}