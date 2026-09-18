#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

   int mes;

   printf("digite em qual um mes para saber sua estação! (em numeros de 1 a 12)\n");
   scanf("%d", &mes);

        switch(mes){
            case 12:
            case 1:
            case 2:
                printf("verão\n");
                break;
            case 3:
            case 4:
            case 5:
                printf("outono\n");
                break;
            case 6:
            case 7:
            case 8:
                printf("inverno\n");
                break;
            case 9:
            case 10:
            case 11:
                printf("primavera\n");
                break;
            
        }
        return 0;

    }