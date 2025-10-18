#include <stdio.h>
#include <string.h>

int main(){
    char palavra[8];
    int tamanho; 
    int isPalindromo = 1;

    fgets(palavra, (int)sizeof(palavra), stdin);
    tamanho = (int)strlen(palavra);
    /* remover '\n' deixado por fgets, se houver */
    if (tamanho > 0 && palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        --tamanho;
    }

    if (tamanho > 7)
    {
        printf("A palavra deve possuir até 7 caracteres.\n");
        return 0;
    }
    
    for (int i = 0; i < tamanho / 2; i++)
    {
        if (palavra[i] != palavra[tamanho - i - 1])
        {
            isPalindromo = 0;
            break;
        }
        
    }

    printf("%s é %s palíndromo.\n", palavra, isPalindromo ? "um" : "não um");
    return 0;
}