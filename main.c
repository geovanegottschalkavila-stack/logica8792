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

        int n;
        printf("Quantas pessoas deseja cadastrar: ");
        scanf("%d", &n);
        getchar(); //consome o '\n' deixado pelo scanf
        struct pessoa p1[n];
        for(int i = 0; i < n; i++){
            printf("\nPessoa %d\n, ", i + 1);
            printf("Nome Completo: ");
            fgets(p1[1].nome, sizeof(p1[i].nome), stdin) ;

            printf("Idade: ");
            scanf("%d", &p1[i].idade);
            printf("Altura: ");
            scanf("%f", &p1[i].altura);
            printf("Peso: ");
            scanf("%f", &p1[i].peso);
            getchar();
        }
        printf("\n----- Lista de Pessoas-----\n");
        for(int i = 0; i < n; i++){
            printf("\nNome: %s | Idade: %d | Altura: %.2f | Peso: %.2f\n",i + 1, p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
        }

    return 0;
}