#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int a, b, c, maior;

        printf("Digite tres numeros: ");
        scanf("%d %d %d", &a, &b, &c);

        maior = a;

        if(b > maior) maior = b;
        if(c > maior) maior = c;
        
        printf("Maior: %d", maior);

        return 0;
    }