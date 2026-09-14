#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
    
    bool ehPar(int numero){
        return(numero % 2 == 0);

    }
    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

        int idade;

        printf("Digite um idade: ");
        scanf("%d", &idade);

        if(idade >= 18){
            printf("voce é maior de idade!");
        }else{
            printf("Voce é menor de idade!")
        }
        

        return 0;
    }