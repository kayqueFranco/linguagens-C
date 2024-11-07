#include <stdio.h>
// O comando "../" faz a saída da çasta atual(src)
//e lib é a pasta onde esta o arquivop de cabeçalho "calculos.h"
#include "../lib/calculos.h"

int main (){
    int valores[] ={5,23,5,7,10,4,12,30};
    printf("O resultado da soma é %d\n" ,somArray(valores,8));
    printf("O resultado da média é %d\n" ,mediaArray(valores,8));
    printf("O maior valor é %d\n" ,maiorValor(valores,8));
    return 0;
}