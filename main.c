#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

float lerPositivo(char mensagem[]){
    float valor;
    do{
        printf("%s", mensagem);
        scanf("%f", &valor);
        if(valor <= 0){
            printf("Valor inválido! Digite um número maior que 0.\n");
        }
    }while(valor <= 0);
    return valor;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float idade = lerPositivo("Digite a idade:");
    float peso = lerPositivo("Digite o peso (Kg):");
    float altura = lerPositivo("Digite a altura (m):");

    printf("\nIdade: %.0f anos\n", idade);
    printf("IMC: %f\n", peso / (altura * altura));
    
    return 0;
}