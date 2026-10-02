#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int v[n];
    int pares = 0, impares = 0;
    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
        if(v[i] < 0){
            v[i] = 0;
        }
            
    }
    
    printf("Vetor ajustado: \n");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    printf("\n");

    return 0;
    }