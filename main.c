#include<stdio.h>
#include<windows.h>
#include<math.h>

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       int numero;
       printf("Digite um numero: ");
       scanf("%d", &numero);

       int quadrado = (int)pow(numero, 2);
       int cubo = (int)pow(numero, 3);
       printf("Quadrado de %d = %d\n", numero, quadrado);
       printf("cubo de %d = %d", numero, cubo);

       

        return 0;

    }