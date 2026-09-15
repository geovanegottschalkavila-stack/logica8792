#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int a, b;

        printf("Digite dois números: ");
        scanf("%d %d", &a, &b);

        if(a != b){
            printf("Os números são diferentes!\n");
        }else{
            printf("Os números são iguais!\n");
        }

        return 0;
    }