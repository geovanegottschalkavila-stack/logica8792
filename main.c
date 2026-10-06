#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    
   

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

    int numero;
    int sucesso;

    do{
        printf("Digite um numero maior que 0: ");
        sucesso = scanf("%d", &numero);

        if(sucesso != 1){
            printf("Entrada inválida! Digite apenas números inteiros.\n");
            while(getchar() != '\n');
            numero = 0;
        }
    }while(numero <= 0);

        printf("Você digitou %d, que é válido!\n", numero);

    return 0;
    }