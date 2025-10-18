#include <stdio.h>

int main(){
    int n1, n2, n3, n4, maior;
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    maior = n1 > n2 ? n1 : n2;
    maior = maior > n3 ? maior : n3;
    maior = maior > n4 ? maior : n4;

    printf("Os números digitados foram: %i %i %i %i. O maior número é: %i\n", n1, n2, n3, n4, maior);
    return 0;
}