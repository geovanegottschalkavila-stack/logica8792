#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    float areaRetangulo(float base, float altura){
        return base * altura;
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   printf("Area: %.2fn", areaRetangulo(5, 3.5));

    return 0;
}