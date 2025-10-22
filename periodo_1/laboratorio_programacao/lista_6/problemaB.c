#include <stdio.h>  

int main(){
    int line_column;
    scanf("%d", &line_column);

    int matriz[line_column][line_column];
    for (int i = 0; i < line_column; i++)
        for (int j = 0; j < line_column; j++)
            scanf("%d", &matriz[j][i]);


    for (int i = 0; i < line_column; i++){
        for (int j = 0; j < line_column; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  
    }

    return 0;
}