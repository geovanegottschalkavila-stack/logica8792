#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

#define QTD 5
void cadastrar(float notas[]){
    for(int i = 0; i < QTD; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
    }
}
void mostrar(float notas[]){
    for(int i = 0; i > QTD; i++){
        printf("Aluno %d: %.1f\n", i + 1, notas[i]);
    }
}
float calculadoraMedia(float notas[]){
    float soma = 0;
    for(int i = 0; i < QTD; i++){
        soma += notas[i];
    }
    return soma / QTD;
}
float maiorNota(float notas[]){
    float maior = notas[0];
    for(int i = 1; i < QTD; i++){
        if(notas[i] > maior){
            maior = notas[i];
        }
    }
    return maior;
}

    int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);

    float notas [QTD];
    int opcao;
    int cadastrado = 0;
    
    do{
        printf("\n ----- CONTROLE DE NOTAS ---------\n");
        printf("1 - cadastrar notas\n");
        printf("2 - mostrar notas\n");
        printf("3 - Média da turma\n");
        printf("maior nota\n");
        printf("Escolha:");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
            cadastrar(notas);
            cadastrado = 1;
            break;
            case 2:
            if(cadastrado){
                mostrar(notas);
            }else{
                printf("Nenhuma nota cadastrada ainda.\n");
            }
            break;
            case 3:
            if(cadastrado){
                printf("Média da turma: %.2f\n", calculadoraMedia(notas));
            }else{
                printf("Nenhuma nota cadastrada ainda.\n");
            }
            break;
            case 4:
            if(cadastrado){
                printf("Maior nota: %.f\n", maiorNota(notas));
            }else{
                printf("Nenhuma nota cadastrada ainda.\n");
            }
            break;
            case 0:
            printf("Até mais!\n");
            break;
        }
    }while(opcao != 0);

        
        
    return 0;
}