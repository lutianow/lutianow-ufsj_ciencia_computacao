#include <stdio.h>

int main() {
    double aresta, area;
    scanf("%lf", &aresta);
    area = aresta * aresta * 6; //area do cubo
    printf("%.2f\n", area);

    return 0;
}