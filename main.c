#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char placa[20] ="";
    int opcao;

    

     do {
            printf("\n-------REGISTRO DE PLACA--------\n");
            printf("1 - Registrar placa\n");
            printf("2 - Ver placa registrada\n");
            printf("3 - Sair\n");
            printf("Escolha uma opção:");
            scanf("%d", &opcao);
            
            switch(opcao){
                    
                case 1:
                    printf("Digite a placa do veiculo:");
                    scanf("%s", placa);
                    break;

                case 2:
                    if(strlen(placa)== 0){
                        printf("Nenhuma placa registrada.\n");
                    }else{
                        printf("Placa registrada:%s\n", placa);
                    }
                    break;

                case 3:
                    printf("Saindo do sistema...\n");
                    break;
                default:
                    printf("Opção inválida!");
            }

        }while(opcao != 3);
       

    return 0;
}