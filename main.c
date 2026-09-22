#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       int idade[3] = {25, 35, 45};

       printf("%s %d %s", "Manoel tem, ", idade[0], "anos!");
       printf("%s %d %s", "\nlucia tem ", idade[1], "anos!");
       printf("%s %d %s", "\nmartim tem ", idade[2], "anos!");

        return 0;

    }