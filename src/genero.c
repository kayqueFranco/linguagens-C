#include <stdio.h>
#include "../lib/atividade1.h"

int main(){
    char letra;

    printf("digite f ou m para saber o genero\n");
    scanf("%c" ,&letra);

   genero(letra);

    return 0;
}