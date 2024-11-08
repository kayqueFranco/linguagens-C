#include<stdio.h>
int maiorValor(int n1, int n2){
   int rs;

    if (n1 > n2){
        rs= n1;
    }

    else {
        rs =n2;
    }
    return rs;
}



char genero(char letra){
    if(letra=='m'){
        printf("Masculino\n");

    }
    else if (letra =='f'){
        printf("Femenino\n");
    }
    else{
        printf("Genero invalido\n ");
    }
    
}
void vogal (char letra){
    if(letra== 'a'){
        printf(" A é volgal\n");
    }
    else if (letra == 'e'){
        printf("E é vogal\n");
    }
    else if (letra == 'i'){
        printf("I é vogal\n");

    }
    else if (letra =='o'){
        printf("O é vogal \n");
    }
    else if (letra== 'u'){
        printf("U é vogal\n");
    }
    else{
        printf("%c é consoante\n" ,letra);
    }
}