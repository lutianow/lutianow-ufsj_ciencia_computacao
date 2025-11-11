#include <stdio.h>

typedef struct carro
{
    double preco;
    int ano;
    char categoria;
} carro;

int main()
{
    carro c1, c2;
    scanf("%lf %d %c", &c1.preco, &c1.ano, &c1.categoria);
    scanf("%lf %d %c", &c2.preco, &c2.ano, &c2.categoria);

    if (c1.ano < c2.ano)
    {
        printf("%.2lf %c\n", c2.preco, c2.categoria);
    }else
    {
        printf("%.2lf %c\n", c1.preco, c1.categoria);
    }

    return 0;
}