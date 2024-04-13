#include <stdio.h>
int main(){
    printf("Digite o valor da variável 'a': ");
    int a;
    scanf("%d", &a);

    printf("Digite o valor da variável 'b': ");
    int b;
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    int troca = a;
    a = b;
    b = troca;

    printf("Depois da troca: a = %d, b = %d\n", a,b);
    
    return 0;

}