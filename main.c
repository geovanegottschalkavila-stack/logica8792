#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
        int soma = 0;
        int i;
        
       for(i = 1; i <= 5; i++){
            //0+1
            //1+2
            //3+3
            //6+4
            //10+5
            soma = soma + i;
            //soma += i;
       }

       printf("soma é %d", soma);

        return 0;

    }