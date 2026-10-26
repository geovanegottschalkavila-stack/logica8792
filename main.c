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

    const int QTD = 5;
    int numeros[QTD];
    srand(time(NULL));

    for(int i = 0; i < QTD; i++){
        numeros[i] = rand() % 10 + 1;
    }
    printf("Números sorteados: \n");
    for(int i = 0; i < QTD; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}