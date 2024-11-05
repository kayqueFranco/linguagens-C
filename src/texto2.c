#include <stdio.h>

int main(){
    char nome[20];

    printf("Escreva o seu primeiro nome e tecle Enter\n");
    //Foi necessario utilizar colchetes para que o comando scanf receba toda a cadeia de caractes.
    //O elemento ^ (circunflexo ) foi usado para indicar onde começa o primeiro caracter.E comando \n,nestecaso,
    //está sendo usado para ler o espaço aplicado.
    //ao final é utilizado o caracter s(string).
    scanf("%[^\n]s" ,&nome);
    
    printf("Olá, %s. Seja bem vindo\n",nome);


    return 0;
}