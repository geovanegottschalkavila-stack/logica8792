#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        int resposta;

        do {
            printf("Execute o Programa..\n");
            printf("Deseja Continuar? (1 - sim / 2 - não):");
            scanf("%d", &resposta);

        }while(resposta == 1);
        printf("Programa encerrado!!\n");
        
    return 0;
}