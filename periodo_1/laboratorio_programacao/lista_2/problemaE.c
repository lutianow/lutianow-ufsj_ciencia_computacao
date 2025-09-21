#include <stdio.h>

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    float z = x/y;
    printf("%.2f\n", z);
    return 0;
}