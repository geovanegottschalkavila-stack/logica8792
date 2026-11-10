#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    
int maiorDeTres(int a, int b, int c){
    
    int maior;

    if(b > maior){
        maior = b;
    }

    if(c > maior){
        maior = c;
    }
    return maior;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int num1, num2, num3;

    printf("Digite 3 valores:");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Maior: %d\n", maiorDeTres(num1, num2, num3));
   
    return 0;
}