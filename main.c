#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       float peso, altura, imc;

       printf("Digite o peso (kg): ");
       scanf("%F", &altura);

       imc = peso / (altura * altura);

       if(imc < 18.5){
            printf("Classificaçõa: Abaixo do peso!\n");
       }else if(imc < 25){
            printf("Classificação: Peso normal!\n");
       }else if(imc < 30){
            printf("Classificação: sobrepeso!\n");
       }else{
            printf("classificação: Obesidade!\n");
       }


        return 0;

    }