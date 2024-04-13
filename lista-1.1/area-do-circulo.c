#include <stdio.h>
int main(){
    float pi = 3.14;
    printf("Digite o tamanho do raio do círculo: ");
    float raio;
    scanf("%f", &raio);

    float area = (raio*raio)*pi;

    printf("A área do círculo com %.2f de raio é: %.2f\n", raio, area);

    return 0;
}