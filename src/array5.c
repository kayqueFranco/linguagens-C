#include <stdio.h>

int main (){
    int n[]={13,8,23,95,47,14,10,45,165};

    int soma = 0 ;
    int media ;

    for (int i = 0; i< 9; i++){
        soma += n[i];
        media = soma/9;
        

    }

    printf("A soma dos valores é %d e a media é %d\n",soma ,media);
    


    return 0;
}