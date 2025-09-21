#include <stdio.h>

int main() {
    int a, b, valorLogico;
    scanf("%i%i", &a, &b);
    valorLogico = !(a && b) || (!a && b); 
    printf("%i\n", valorLogico);

    return 0;
}