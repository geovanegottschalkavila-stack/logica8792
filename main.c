#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int idade;
        float altura;

        printf("bem vindos ao brinquedo roleta da morte!");
        printf("\nQaul sua idade?");
        scanf("%d", &idade);
        printf("\nQaula sua altura?");
        scanf("%f", &altura);

        if((idade >= 18) || (altura >= 1.60)){
            printf("você pode brincar na roleta!");
        }else{
            printf("você não pode brincar na roleta");
        }

        return 0;
    }