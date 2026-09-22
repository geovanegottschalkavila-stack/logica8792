#include<stdio.h>
#include<windows.h>

    void saudar(const char *nome){
        printf("Olá %s\n", nome);
    }
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
        
       saudar("Geovane");
       saudar("gottschalk");
       saudar("Àvila");

        return 0;

    }