#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        float n1, n2,n3, medida;

        printf("digite três notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        medida = (n1 + n2 + n3) / 3;
        
        printf("medida: %.2f\n", medida);

        return 0;
    }