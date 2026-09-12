#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        float celcius, Fahrenheit;

        printf("Digite a temperatura em Celcius: ");
        scanf("%f", &celcius);

        Fahrenheit = (celcius * 9.0 / 5.0) + 32;
        printf("Fahrenheit: %.2f\n", Fahrenheit);

        return 0;
    }