#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int contador = 0; 
       for(int i = 1; i <= 9; i++){
            for(int j = 1; j <= 9; j++){
                for(int k = 1; k <= 9; k++){
                    for(int l = 1; l <= 9; l++){
            contador++;
                printf("Os possiveis resultados do cadeado: %d %d %d %d\n", i, j, k, l);
                    }
                 
                }
           
            }
       }
       printf("O número total de interação: %d\n", contador);
       
        return 0;

    } 