#include <stdio.h>

int main(){
    int n1, n2, n3, n4 = 0;
    printf("Digite quatro números inteiros:\n");
    scanf("%i%i%i%i", &n1, &n2, &n3, &n4);
    printf("Na ordem inversa, seus números digitado são:\n%i\n%i\n%i\n%i\n", n4, n3, n2, n1);
    return 0;
}