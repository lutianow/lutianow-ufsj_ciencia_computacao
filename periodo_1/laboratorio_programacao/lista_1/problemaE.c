#include <stdio.h>

int main() {
    int x;
    printf("Digite um número inteiro de três algarismos:\n");
    scanf("%d", &x);

    printf("Centena: %d\n", x / 100);
    printf("Dezena: %d\n", (x / 10) % 10);
    printf("Unidade: %d\n", x % 10);

    return 0;
}
