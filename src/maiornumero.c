#include <stdio.h>
#include "../lib/atividade1.h"

int main(){
    int n1;
    int n2;

    printf("Digite o primeiro número e tecle Enter\n");
    scanf("%d" ,& n1);

    printf("Digite o primeiro número e tecle Enter\n");
    scanf("%d" ,&n2);


    printf(" o maior número entre eles é %d\n" ,maiorValor(n1,n2));

    return 0;
}