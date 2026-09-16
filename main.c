#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int idade;
        float ehEstudante;

        printf("Qual sua idade?");
        scanf("%d", &idade);
        printf("\nVocê é estudante (0 - Não | 1 - Sim):");
        scanf("%d", &ehEstudante);

        if((idade >= 60) && (ehEstudante == 1)){
            printf("parabéns você te direito a desconto!");
        }else{
            printf("infelismente você não terá direito a desconto!");
        }

        return 0;
    }