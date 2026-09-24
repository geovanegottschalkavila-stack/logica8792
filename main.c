#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       for(int i = 0; i <= 50; i += 2){
            printf("%d\n", i);
       }

        return 0;

    }