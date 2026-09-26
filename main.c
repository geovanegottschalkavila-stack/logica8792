#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int opcao;
       float a, b;
       do{
        printf("\n----Menú----\n");
        printf("1 - soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Saír\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Digite um numero: ");
                scanf("%F %F", &a, &b);
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                printf("Digite um número: ");
                scanf("%F %f", &a, &b);
                printf("Resultado: %.2f\n", a / b);
                break;
            case 0:
                printf("Saindo.....");
                break;
            default:
                printf("Opção inválida!\n");
                break;
                
        }
       }while(opcao != 0);

        return 0;

    }