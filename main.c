#include<stdio.h>
#include<locale.h>
    
    int main(){

        setlocale(LC_ALL, "pt_BR.UTF-8");

        int a = 5;
        int b = 4;

        printf("o maior número é: %d\n", (a + b));
        printf("o resultado da subtração é: %d\n", (a - b));
        printf("a multiplicação é: %d\n", (a * b));
        printf("a divisão é: %d\n", (a / b));

        return 0;
    }