#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
        
       int numeros[6];

       numeros[0] = 10;
       numeros[1] = 20;
       numeros[2] = 30;
       numeros[3] = 40;
       numeros[4] = 50;
       numeros[5] = 60;

       printf("%d", numeros[5]);



        return 0;

    }