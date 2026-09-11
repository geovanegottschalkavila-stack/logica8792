#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        float raio;
        const float PI = 3.14159;

        printf("digite o raio do circulo: ");
        scanf("%f", &raio);
        printf("Area: %.2f\n", 2 * PI * raio);
        printf("Perímetro: %.2f\n", 2 * PI * raio);
        
        return 0;
    }