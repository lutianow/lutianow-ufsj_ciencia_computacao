#include <stdio.h>
double mediaVetor(double v[], int n){
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int main(){
    int n;
    scanf("%d", &n);
    double v[n];

    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }  

    double media = mediaVetor(v, n);
    printf("%.2lf\n", media);
    return 0;
}