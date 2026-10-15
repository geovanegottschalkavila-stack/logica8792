#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    struct pessoa{
        char nome[50];
        int idade;
        float altura;
    };
   

    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        struct pessoa p1 = {"Geovane", 32, 1.84};
        struct pessoa p2 = {"Pedro", 6, 1};
        struct pessoa p3 = {"Davi", 13, 1.30};

        printf("Nome: %s | Idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
        printf("Nome: %s | Idade: %d | Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
        printf("Nome: %s | Idade: %d | Altura: %.2f\n", p3.nome, p3.idade, p3.altura);

    

    return 0;
}