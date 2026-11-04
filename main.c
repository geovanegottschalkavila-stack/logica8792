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

    char texto[100];
    int tamanho = 0;

    printf("Digite uma frase:");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = '\n';

    while(texto[tamanho] != '\n'){
        tamanho++;
    }
    printf("Quantidade de caracteres: %d\n", tamanho);
    

    return 0;
}