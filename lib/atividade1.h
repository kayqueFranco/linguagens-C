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

void reajuste(float salario){
    float valor_aumento;
    float novo_salario;
    
    if(salario<=280){
        valor_aumento = salario * (20.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %2.f e foi ajustado em 20%. o valor de aumento é %2.f e novo salário é %2.f\n" ,salario,valor_aumento,novo_salario); 
    }
    else if(salario<=700 ){
        valor_aumento = salario * (15.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %2.f e foi ajustado em 15%. o valor de aumento é %2.f e novo salário é %2.f\n" ,salario,valor_aumento,novo_salario);
    }
    else if (salario<=1500){
        valor_aumento = salario * (10.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %2.f e foi ajustado em 10%. o valor de aumento é %2.f e novo salário é %2.f\n" ,salario,valor_aumento,novo_salario);
    }
    else{
        valor_aumento = salario * (5.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %2.f e foi ajustado em 5%. o valor de aumento é %2.f e novo salário é %2.f\n" ,salario,valor_aumento,novo_salario);
    } 
}