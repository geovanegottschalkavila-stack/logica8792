#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    
   

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

    int numero;

    do{
        printf("Digite um numero maior que 0: ");
        scanf("%d", &numero);
    }while(numero <= 0);

        printf("Você digitou %d, que é válido!\n", numero);

    return 0;
    }