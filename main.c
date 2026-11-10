#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    
int somaDigitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n % 10;
        n /= 10; 
    }
    return soma;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;

    printf("Digite um digito inteiro:");
    scanf("%d", &numero);
    
    printf("soma dos digitos é: %d\n", somaDigitos(numero));

    return 0;
}