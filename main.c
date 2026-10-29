#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    void mostrarNome(char nome[]){
        printf("Nome: %s\n", nome);
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    mostrarNome("Geovane");
    

    return 0;
}