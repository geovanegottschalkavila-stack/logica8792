#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
    
int absoluto(int n){
    if(n < 0){
        return -n;
    }
    return n;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("%d\n", absoluto(-8));
    printf("%d\n", absoluto(4));
    printf("%d\n", absoluto(0));

    return 0;
}