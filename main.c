#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
    
    char* retornarNome(char nome[]) {
        return nome;
    }

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);
     
                printf("O nome é: %s\n", retornarNome("Geovane"));

    return 0;
    }