#include <stdio.h>
int main(){
    int ano;
    int qtd=0;

    for(ano = 1930 ; ano<= 2024 ; ano++){
        if(ano % 4 == 0){
            printf("%d\n",ano);
            qtd++;

            
        }
    }

        printf("\n----------------------\n");
        printf("A quantidade de anos são %d\n" ,qtd);

    return 0;
}