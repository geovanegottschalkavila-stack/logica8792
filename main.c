#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


    void saudacao(char nome[]){
        printf("Ola %s\n", nome);
    }
    int soma(int a, int b){
        return a + b;
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    saudacao("Geovane");
    int resultado = soma(5, 5);
    printf("%d", resultado);

    return 0;
}