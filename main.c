#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       for(int i = 1; i < 3; i++){
        for(int j = 1; j < 4; j++){
            printf("For externo e For interno: %d %d\n", i, j);
        }
       }

        return 0;

    }