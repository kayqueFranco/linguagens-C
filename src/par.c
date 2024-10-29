/*
Este progama obtem um número de usuario e diz ser par, exibindo uma mensagem na tela
*/
#include <stdio.h>

int main (){
    int n;
    printf ("Digite um número e tecle Enter\n");
    scanf("%d",&n);


    if (n % 2 == 0){

        printf ("O valor %d é par\n" ,n);

    }
    return 0;
}