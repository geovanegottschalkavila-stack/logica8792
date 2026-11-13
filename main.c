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
    for(int i = 100; i <= 999; i++){
        int centena = i / 100;
        int unidade = i % 10;
        if(centena == unidade){
            total++;
        }
    }
    printf("Palíndromo do 3 dígitos: %d\n", total);

    return 0;
}