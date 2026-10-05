#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
    
    char* saudacao(){
            return "Ola, seja bem Vindo(a)!";
    }    

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);
     
        printf("%s\n", saudacao());

    return 0;
    }