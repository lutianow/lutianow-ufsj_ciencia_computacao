#include <stdio.h>

int main(){
    int idade;
    float valor, salario;
    
    scanf("%d %f %f", &idade, &valor, &salario);
    if (idade < 18)
        printf("Emprestimo nao concedido!\n");
    else if (valor < 1000 && valor > 100000) 
        printf("Emprestimo nao concedido!\n");
    else if (salario < 2500.0 && valor > 15000.0) {
        printf("Emprestimo nao concedido!\n");
    } else {
        printf("Emprestimo concedido!\n");
    }

    return 0;
}