#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 <= n2 && n2 <= n3)
        printf("Ordem crescente\n");
    else   
        printf("Não está em ordem crescente.\n");

    return 0;
}