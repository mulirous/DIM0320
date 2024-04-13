#include <stdio.h>
int main(){
    printf("Digite a hora desejada em MINUTOS: ");
    int minutos;
    scanf("%d", &minutos);

    int h = minutos/60;
    int m = minutos%60;

    printf("%d horas e %d minutos\n", h, m);

    return 0;
}