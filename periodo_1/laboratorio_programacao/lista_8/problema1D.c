#include <stdio.h>

int somaAlgarismos(int a)
{
    int soma = 0;

    if (a < 0)
    {
        printf("Negativo\n");
        return -1;
    }

    for (int i = a; i >= 0 ; i++)
    {

        soma += a % 10;
        a = a / 10;
    }
    return soma;
}
int main()
{
    int x, resultado;
    scanf("%d", &x);
    resultado = somaAlgarismos(x);
    printf("%d\n", resultado);
    return 0;
}

