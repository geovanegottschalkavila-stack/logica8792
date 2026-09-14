#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int a, b, c, d, e, maior;

        printf("Digite tres numeros: ");
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        maior = a;

        if(b > maior) maior = b;
        if(c > maior) maior = c;
        if(d > maior) maior = d;
        if(e > maior) maior = e;
        
        printf("maior: %d", maior);

        return 0;
    }