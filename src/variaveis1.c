#include <stdio.h>
int main(){
    int n1 =10;
    int n2 =20;
    int rs = n1 + n2;
    // Imprimir o valor da variavel e o valor da memória de casa uma
    printf("o valor de n1 é %d\n ",n1);
    // Para exibir o endereço de memória iremos usar o coamndo &
    printf("O endereço de n é %p\n" , &n1);

    printf("O valor de n2 %d\n" ,n2);
    printf("O endereço de n2 é %p\n" ,n2);

    printf("o valor de rs é %d\n" ,rs);
    printf("o endereço de rs é %p\n" , &rs);
    return 0;
}