#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    #define PI 3.14159
    float area_circulo(float raio){
        return PI * raio * raio;
    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float r; 
    printf("Raio: ");
    scanf("%f", &r);
    printf("Área: %.2f\n", area_circulo(r));

    return 0;
}