#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int numero;
       printf("Digite um numero positivo:");
       scanf("%d", &numero);

       while(numero <= 0){
            printf("Numero inválido! Digite novamente: ");
            scanf("%d", &numero);
       }
       printf("Numero válido: %d\n", numero);
        return 0;

    }