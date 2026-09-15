#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int a, b, c, d, e, menor;

        printf("digite um numero para a: ");
        scanf("%d", &a);

        printf("digite um numero para b: ");
        scanf("%d", &b);

        printf("digite um numero para c: ");
        scanf("%d", &c);

        printf("digite um numero para d: ");
        scanf("%d", &d);

        printf("digite um numero para e: ");
        scanf("%d", &d);

        menor = a;

        if(b < menor) menor = b;
        if(c < menor) menor = c;
        if(d < menor) menor = d;
        if(e < menor) menor = e;
        
        printf("menor: %d", menor);

        return 0;
    }