#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int tab;

       printf("Digite um numero: ");
       scanf("%d", &tab);
       
       for(int i = 0; i <= 10; i++){
            int resultado = tab * i;
            printf("O resultado de %d x %d = %d\n", tab, i, resultado);
        
       }
           

        return 0;

    }