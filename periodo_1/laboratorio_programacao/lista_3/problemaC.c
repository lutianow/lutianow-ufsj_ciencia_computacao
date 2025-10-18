#include <stdio.h>

int main(){
    float n1, n2, n3, isTringulo;
    scanf("%f %f %f", &n1, &n2, &n3);
    isTringulo = (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1);

    if (isTringulo)
        printf("SIM\n");
    else 
        printf("NAO\n");

    return 0;
}