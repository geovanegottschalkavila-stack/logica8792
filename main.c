#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    void contarVogais(char palavra[]){
        int contador = 0;
        for(int i = 0; i <strlen(palavra); i++){
            char c = palavra[i];
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                contador++;
            }//stren calcula os caracteres de uma palavra.
        }
        printf("A Palavra '%s' tem %d vogais.\n", palavra, contador);
    }
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);
       
       char p[20];
       printf("Digite um a palavra para verificar as vogais: ");
       scanf("%s", p);

       contarVogais(p);
       
        return 0;

    }