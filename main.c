#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    
int quadrado(int n){
    return n * n;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;

    printf("Digite um numero para saber ao quadrado:");
    scanf("%d", &numero);

    printf("O quadrado é:%d", quadrado(numero));

    

    return 0;
}