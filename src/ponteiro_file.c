#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo =fopen("files/texto.txt","a");
    //"w"write(escrever)||"r"read(ler)||"a"append(adicionar)
    fprintf(arquivo,"aaaaaaaa, chega sabado logo quero descansar\n");
    fclose(arquivo);

    printf("criamos o arquivo\n");
    return 0;
}