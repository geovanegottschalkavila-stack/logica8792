#include<stdio.h>
#include<windows.h>

    void saudar(){
        printf("Olá Mundo\n");
        printf("Que belo dia\n");
    }
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
        
       saudar();

        return 0;

    }