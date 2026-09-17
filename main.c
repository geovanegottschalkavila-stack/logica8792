#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       int nota;

       printf("Digite uma nota: ");
       scanf("%d", &nota);

       switch(nota){
            case 1:
                printf("recuperação!");
                break;
            case 2:
                printf("recuperação!");
                break;
            case 3:
                printf("recuperação");
                break;
            case 4:
                printf("recuoeração");
                break;
            case 5:
                printf("recuperação");
                break;
            case 6:
                printf("aprovado");
                break;
            case 7:
                printf("aprovado");
                break;
            case 8:
                printf("aprovado");
                break;
            case 9:
                printf("aprovado");
                break;
            case 10:
                printf("aprovado");
                break;
                
            default:
                printf("número invalido!!");
                break;
            

       }

        return 0;
    }