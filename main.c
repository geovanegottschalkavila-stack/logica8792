#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    int quadrado(int numero){
        return numero * numero;
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    int numero;

    printf("Digite um numero pra saber o quadrado:");
    scanf("%d", &numero);
    n = quadrado(numero);


    printf("o quadrado é:%d", n);


    
    

    return 0;
}