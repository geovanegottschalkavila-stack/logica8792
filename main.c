#include<stdio.h>
#include<windows.h>

    
    int main(){

       SetConsoleCP(65001);
       SetConsoleOutputCP(65001);

   char letra;
    printf("digite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            printf("vogal\n");
        }else{
            printf("consoante\n");
        }
        return 0;

    }