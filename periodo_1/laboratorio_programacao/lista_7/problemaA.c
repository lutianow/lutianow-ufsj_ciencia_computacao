#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int cont = 0;

    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'r') {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}