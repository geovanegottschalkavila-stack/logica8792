#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       for(int i = 0; i <= 10000; i++){
            printf("%d\n", "te amo");
            i++;
       }
       printf("\nMeu for Funcionou!!");

        return 0;

    }