#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
    
    

            int main() {
            SetConsoleCP(65001);
            SetConsoleOutputCP(65001);
     
    int voto;

            printf("voto: ");
            scanf("%d", &voto);

     if(voto == 10){
    printf("manoel");

    }else if(voto == 20){
        printf("carla");
        
    }else if(voto == 30){
        printf("bianca");

    }else if(voto == 40){
        printf("Bruno");

    }else{
        printf("Voto Inválido, Digite novamente!!!!!");
        scanf("%d",&voto);
    }

    return 0;
    }