#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){
    
    int n;
    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

        return 0;
    }