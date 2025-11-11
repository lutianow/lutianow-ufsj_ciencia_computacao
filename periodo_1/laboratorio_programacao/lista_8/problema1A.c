#include <stdio.h> 

int soma(int a, int b){
    int soma = 0;
    for(int i = a; i <= b; i++){
        soma += i;
    }
    return soma;
}
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    int resultado = soma(x,y);
    printf("%d\n", resultado);
    return 0;
}