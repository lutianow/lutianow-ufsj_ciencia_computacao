#include <stdio.h>

int main(void) {
    int ano;
    double preco;

    if (scanf("%d %lf", &ano, &preco) != 2) 
        return 0;

    // classificação padrão
    const char *res = "NAO";

    if (ano <= 2010) {
        if (preco < 25000.0) 
            res = "SIM";
        else if (preco <= 40000.0) 
            res = "TALVEZ";
        else 
            res = "NAO";
    } else if (ano <= 2015) {
        if (preco < 30000.0) 
            res = "SIM";
        else if (preco <= 50000.0) 
            res = "SIM";
        else 
            res = "TALVEZ";
    } else if (ano <= 2020) {
        if (preco < 40000.0) 
            res = "TALVEZ";
        else if (preco <= 70000.0) 
            res = "SIM";
        else res = "NAO";
    } else { // 2021 em diante
        if (preco < 50000.0) 
            res = "TALVEZ";
        else if (preco <= 100000.0) 
            res = "NAO";
        else res = "NAO";
    }

    printf("%s\n", res);
    return 0;
}
