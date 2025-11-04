#include <stdio.h> 
#include <string.h>

int main() {
    char s[300];
    char sub[300];
    fgets(s, 300, stdin);

    int posInicial = 0; 
    int ignoreSpaces = 1;
    
    for (int i = 0; s[i] != '.'; i++) {
        posInicial = i + 2;
    }

    for (int i = posInicial, j = 0; s[i] != '.'; i++, j++) {
        if (ignoreSpaces && (s[i] == ' ')) {
            continue;
        } else {
            ignoreSpaces = 0;
        }   
        
        sub[j] = s[i]; 
    }

    sub[strlen(sub)] = '.';
    sub[strlen(sub) + 1] = '\0';

    printf("%s\n", sub);
    return 0;
}