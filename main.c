#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int n;

        printf("Digite um número: ");
        scanf("%d", &n);

        printf("%s", n % 2 == 0 ? "\nPar" : "\nImpar");

        return 0;
    }