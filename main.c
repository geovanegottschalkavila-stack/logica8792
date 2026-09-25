#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       int n;
       long long fatorial = 1;

       printf("Digite um numero: ");
       scanf("%d", &n);

       for(int i = 1; i <= n; i++){
            fatorial *=i;
       }
       printf("Fatorial: %11d\n", fatorial);

        return 0;

    }