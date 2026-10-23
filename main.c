#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        int num;
        
        printf("Digite um número de 1 a 12 para saber quntos dias tem o mes:");
        scanf("%d", &num);

        switch(num){

            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Este mês tem 31 dias");
            break;
            
            case 4: case 6: case 9: case 11:
            printf("Este mês tem 30 dias!!");
            break;

            case 2:
            printf("Fevereiro tem 28 dias!!");
            break;
        }
    



        
    return 0;
}