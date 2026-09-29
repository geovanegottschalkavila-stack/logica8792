#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){
    
    int n;
    printf("Digite o número de linhas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        long long valor = 1;
        for(int espaco = 0; espaco < n - i; espaco++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%lld", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

        return 0;
    }