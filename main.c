#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    
    int soma(int n){
        int total = 0;
        for(int i = 1; i <= n; i++){
            total += i;
        }
        return total;
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    printf("Soma de 1 até.. %d\n", soma(10));


    return 0;
}