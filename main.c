#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

    float celsiusParaFahrenheit(){
        float celsius;
        printf("Digite a temperatura em celsius:");
        scanf("%f", &celsius);
        return celsius * 9 / 5 + 32;

    }

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float fahrenheit;

    fahrenheit = celsiusParaFahrenheit();
    printf("Temperatura em fahrenheit: %.1f F\n", fahrenheit);

    return 0;
}