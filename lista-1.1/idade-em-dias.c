#include <stdio.h>
int main(){
    int idade;
    printf("Digite qual a idade em anos: ");
    scanf("%d", &idade);

    int i_dias = idade*365;

    printf("Em dias, a idade informada é: %d dias\n", i_dias);

    return 0;

}