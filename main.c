#include<stdio.h>
#include<windows.h>

    int somar(int a, int b){
        return a + b;
    }
    int subtrair(int a, int b){
        return a - b;
    }
    int multiplicar( int a, int b){
        return a * b;
    }
    int dividir(int a, int b){
        if(b  <= 0){
            printf("Ele precisa ser maior que 0!");
        }else{
            return a / b;
        }
    }

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int resultado1 = somar(5, 3);
        int resultado2 = subtrair(5, 3);
        int resultado3 = multiplicar(5, 3);
        int resultado4 = dividir(16, 2);
       printf("O resultado da soma é: %d\n", resultado1);
       printf("O resultado da subtração é: %d\n", resultado2);
       printf("o resultado da multiplicação é: %d\n", resultado3);
       printf("O resultado da divisão é: %d\n", resultado4);


        return 0;

    }