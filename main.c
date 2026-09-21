#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       for(int i = 10; i >= 0; i--){
            printf("%d\n", i);
       }

       printf("\nBooommmmmmmm");

        return 0;

    }