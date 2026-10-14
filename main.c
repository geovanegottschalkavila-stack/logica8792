#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    
   

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        int n;
        printf("Digite o tamanho dos vetores: ");
        scanf("%d", &n);

        int a[n], b[n], soma[n];
        printf("Digite os valores do vetor A:\n");
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        printf("Digite os valores do vetor B:\n");
        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        for(int i = 0; i < n; i++){
            soma[i] = a[i] + b[i];
        }
        printf("Vetor soma:\n");
        for(int i = 0; i < n; i++){
            printf("%d\n", soma[i]);
        }
        printf("\n");

    return 0;
    }