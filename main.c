#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int n;
       int resultado;

       printf("Digite um numero para a tabuada: ");
       resultado = scanf("%d", &n);

       if(resultado != 1){
            printf("Entrada invalia! por favor, digite apenas números!");
            return 1;
       }

       for(int i = 1; i <= 10; i++){
            int resposta = n * i;
            printf("O resultado de %d x %d é: %d\n", n, i, resposta);
       }
           

        return 0;

    }