#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){
    
    int n;
    printf("Digite o tamanho da priramide: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int k = 1; k <=(2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }

        return 0;
    }