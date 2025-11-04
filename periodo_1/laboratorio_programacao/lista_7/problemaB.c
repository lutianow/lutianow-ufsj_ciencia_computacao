#include <stdio.h>
#include <string.h>

int main(){
    char string[32];
    fgets(string, 32, stdin);
    int tamanho = strlen(string);
    int eh_palindromo = 1;

    for (int i = 0; i < tamanho / 2; i++) {
        if (string[i] != string[tamanho - i - 2]) {
            eh_palindromo = 0;
            break;
        }
    }

    if(eh_palindromo){
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string nao eh um palindromo.\n");
    }
    return 0;
}
