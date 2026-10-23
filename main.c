#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        int num;
        printf("Digite um numero de 1 a 4:");
        scanf("%d", &num);

        switch (num){
            case 1:
            printf("Você digitou o numero um!!");
            break;

            case 2:
            printf("Você digitou o número dois!!");
            break;
            
            case 3:
            printf("Você digitou o número tres!!");
            break;

            case 4:
            printf("VocÊ digitou o número Quatro!!!");
            break;

        }



        
    return 0;
}