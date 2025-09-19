#include <stdio.h>

int main(){
    int a, b, c, d, valor1, valor2;
    printf("Digite 4 valores inteiros A, B, C, D. Serão realizada as operações A + D e B - C\n");
    printf("Valor de A:\n");
    scanf("%d", &a);
    printf("Valor de B:\n");
    scanf("%d", &b);
    printf("Valor de C:\n");
    scanf("%d", &c);
    printf("Valor de D:\n");
    scanf("%d", &d);

    valor1 = a + d;
    valor2 = b - c;

    printf("A + D = %d\nB - C = %d\n", valor1, valor2);

    return 0;
}