#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    ch = 'a' + ((ch - 'a' + 4) % 26);

    printf("%c\n", ch);

    return 0;
}
