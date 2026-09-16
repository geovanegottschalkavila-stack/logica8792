#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        printf("digite a nota 1: ");
        scanf("%d", &n1);

        printf("\ndigite a nota 2: ");
        scanf("%d", &n2);

        printf("\ndigite a nota 3: ");
        scanf("%d", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("digite a frequencia (em números apenas): ");
        scanf("%f", &freq);

        if(media >= 7 && freq >= 75){
            printf("\naprovado com sucesso!");
        }else{
            printf("\nreprovado!");
        }
        
        return 0;
    }