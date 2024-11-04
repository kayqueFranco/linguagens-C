#include <stdio.h>

int main(){
    int valores[]={10,8,51,24,0,75,20,12};
    int m= valores[0];
    int w ;
    for(w=1 ; w<=7; w++){
        if (valores[w] >m){
            m=valores[w];
        }

    }
    printf("%d\n" ,m);
    return 0;
}