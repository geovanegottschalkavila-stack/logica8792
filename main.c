#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       char carros[3][20] = {"ferrari", "bmw", "mercedes"};

       printf("%s\n", carros[0]);
        return 0;

    }