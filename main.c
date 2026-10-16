#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    struct pessoa{
        char nome[50];
        int idade;
        float altura;
        float peso;
    };

    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

        struct pessoa p1;
    printf("--- Bem-vindo a academia---");
    printf("\n");
    printf("Digte seu nome: ");
    scanf("%s", p1.nome);
    printf("Digite a sua idade: ");
    scanf("%d", &p1.idade);
    printf("Digite sua altura: ");
    scanf("%f", &p1.altura);
    printf("Digite seu peso: ");
    scanf("%f", &p1.peso);
    printf("---------Dados da pessoa-----------");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);
    printf("Peso: %.2f\n", p1.peso);


    return 0;
}