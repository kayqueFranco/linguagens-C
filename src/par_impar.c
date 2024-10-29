
#include <stdio.h>
int main (){
    int n;

    printf("Digite um número e tecle enter\n");
    scanf("%d" ,&n);

    if(n % 2 == 0) {
        printf("O numero %d é Par\n");

    }
    else {
        printf("O numero %d é Impar\n");
    }
    return 0;
}