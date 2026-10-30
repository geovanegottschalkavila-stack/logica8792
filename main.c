#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    
    int maior(int a, int b){
        if(a > b) return a;
        return b;
    }

    int maior1(int a, int b, int c){
        return(maior(a, b), c);
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int x, y, z;
    printf("Tres números: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Maior: %d\n", maior1(x, y, z));
    
    return 0;
}