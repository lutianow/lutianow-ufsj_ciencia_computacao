#include <stdio.h>

int main() {
    int x;
    scanf("%i", &x);
    x = (x + 1) % 2;
    printf("%i\n", x);

    return 0;
}