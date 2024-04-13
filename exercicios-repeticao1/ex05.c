/*
Escreva um programa que imprime todas as letras minúsculas em
ordem alfabética, utilizando estruturas de repetição.
*/

#include <stdio.h>

int main() {
    char a = 'a';
    
    for (int i = 0; i < 26; i++) printf("%c ", a + i);

    return 0;
}