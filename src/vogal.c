#include <stdio.h>
#include"../lib/atividade1.h"

int main(){
    char letra = 'l' ;
    

    printf("Digite a letra para saber se é vogal o consoante\n ");
    scanf("%c",&letra);

    vogal(letra);

    return 0;
}