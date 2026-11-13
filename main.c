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

    char palavra[50];
    int tamanho;
    int palindromo = 1;

    printf("Digite uma palávra: ");
    scanf("%49s", palavra);

    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho / 2; i++){
        if(palavra[i] != palavra[tamanho -1 -i]){
            palindromo = 0;
        }
    }
    if(palindromo == 1){
        printf("A palávra é um palíndromo!\n");
    }else{
        printf("A palávra não é um palíndromo!\n");
    }

    return 0;
}