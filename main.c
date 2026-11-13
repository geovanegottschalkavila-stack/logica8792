#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int total = 0;
    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;
        if(unidade == dezena * 2){
            printf("%d\n", i);
            total++;
        }
    }
    printf("Números com o dobro da dezena: %d\n", total);
    
    return 0;
}