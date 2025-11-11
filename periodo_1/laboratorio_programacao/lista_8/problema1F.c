#include <stdio.h>

int retaPassaPeloPonto(float m, float b, float x1, float y1)
{
    if (y1 == m * x1 + b)
        return 1;
    else
        return 0;
}
int main()
{
    float m, b, x1, y1;
    scanf("%f %f %f %f", &m, &b, &x1, &y1);
    if (retaPassaPeloPonto(m, b, x1, y1))
        printf("Acertou\n");
    else
        printf("Errou\n");

    return 0;
}

