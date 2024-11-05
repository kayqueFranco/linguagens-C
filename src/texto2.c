#include <stdio.h>

int main(){
    char nome[20];

    printf("Escreva o seu primeiro nome e tecle Enter\n");
    scanf("%[^\n]s" ,&nome);
    
    printf("Olá, %s. Seja bem vindo\n",nome);


    return 0;
}