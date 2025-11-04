#include <stdio.h>
#include <string.h>

int main() {  
    char string1[17], string2[34];
    scanf("%s %s", string1, string2);
    int tam1 = strlen(string1);
    int tam2 = strlen(string2);

    for (int i = 0; i < (tam1 / 2); i++) {
        char temp = string1[i];
        string1[i] = string1[tam1 - i - 1];
        string1[tam1 - i - 1] = temp;
    }

    printf("%s%s\n", string2, string1);

    return 0;
}