#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int total = 0;

    for(int i = 0; i <= 500; i++){
        if(i % 10 == 7 && i % 3 == 0){
            printf("%d\n", i);
            total++;
        }
    }
    printf("\nTotal: %d\n", total);

    return 0;
}