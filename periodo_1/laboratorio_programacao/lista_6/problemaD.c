#include <stdio.h>  

int main(){
    int line_column, x = 1, soma = 0;
    scanf("%d", &line_column);

    int matriz[line_column][line_column];
    for (int i = 0; i < line_column; i++)
        for (int j = 0; j < line_column; j++)
            matriz[i][j] = x++;


    for (int i = 0; i < line_column; i++){
        for (int j = 0; j <= i; j++){
            soma += matriz[i][j];                    
        }
    }

    for (int i = 0; i < line_column; i++){
        for (int j = 0; j < line_column; j++){
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");  
    }

    printf("soma: %d\n", soma);  

    return 0;
}