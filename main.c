#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int contarDigitos(int numero){
    if(numero < 10){
        return 1;
    }
    return 1 + contarDigitos(numero / 10);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Quantidade:%d\n", contarDigitos(45872));

    return 0;
}