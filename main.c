#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       float a, b, c;

       printf("digite os tres lados do triangulo");
       scanf("%f %f %f", &a, &b, &c);

       if(a == b && b == c){
            printf("Equilátero!\n");
       }else if(a == b || a == c || b == c){
            printf("isoceles!\n");
       }else{
            printf("Escaleno!\n");
       }

        return 0;
    }