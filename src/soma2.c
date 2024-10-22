#include <stdio.h>

int main(){
    int n1;
    int n2;
    int rs;


    printf("Digite um numero: \n");
    //Alocar um número digitato pelo usuario no endereço de memória variavel n1
    scanf("%d" ,&n1);
    printf("Digite outro número: \n");
    scanf("%d" ,&n2);
    //Realizar a soma entre n1 e n2
    rs = n1 + n2;
    //Exibir o resultado da soma 
    printf("O resultado é %d \n" ,rs);
    return 0;
}