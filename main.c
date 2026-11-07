#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


int inverter(int numero, int resultado){
    if(numero == 0){
        return resultado;
    }
    return inverter(numero / 10, resultado * 10 + numero % 10);
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("Invertido:%d\n", inverter(1234, 0));

    return 0;
}