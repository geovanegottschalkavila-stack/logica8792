#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       float a, b, c;

       printf("digite os tres lados do triangulo");
       scanf("%f %f %f", &a, &b, &c);

       if(a == b > c && a + c > b + c > a){
            printf("Os lados foram um triângulo!\n");
       }else{
            printf("Os lados NÂO formam um triangulo!\n");
       }

        return 0;
    }