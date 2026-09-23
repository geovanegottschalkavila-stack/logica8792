#include<stdio.h>
#include<windows.h>
#include<math.h>

    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

       char nome[50];

       printf("digite seu nome completo aqui: ");
       fgets(nome, sizeof(nome), stdin);//lê até encontrar ENTER

       printf("Olá %s", nome);
       

        return 0;

    }