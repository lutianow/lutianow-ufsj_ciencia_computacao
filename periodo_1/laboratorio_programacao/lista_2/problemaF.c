#include <stdio.h>

int main(){
    float valorOriginal, valorPago, valorDesconto;
    scanf("%f%f", &valorOriginal, &valorPago);
    valorDesconto = ((valorOriginal - valorPago) / valorOriginal) * 100;
    printf("%.2f%%\n", valorDesconto);
    return 0;
}