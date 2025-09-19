#include <stdio.h>

int main(){
    float x;
    printf("Escreva um valor real para x para ser calculado na função f(x) = 3x² - 2x + 7:\n");
    scanf("%f", &x);
    x = (3 * x * x) - (2 * x) + 7;
    printf("A imagem desse x é: %.2f\n", x);
    return 0;
}