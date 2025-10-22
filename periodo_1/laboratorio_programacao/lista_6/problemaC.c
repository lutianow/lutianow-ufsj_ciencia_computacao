#include <stdio.h>  
#include <stdlib.h>  

int main(){
    const COLUMNS = 2;
    const LINES = 2;
    int matriz[LINES][COLUMNS];

    int valor, contadorDeNegativo = 0;

    for (int i = 0; i < LINES; i++)
        for (int j = 0; j < COLUMNS; j++)
        {        
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }

    for (int i = 0; i < LINES; i++){
        for (int j = 0; j < COLUMNS; j++){
            if (matriz[i][j] < 0){
                contadorDeNegativo++;
                matriz[i][j] = abs(matriz[i][j]);  
            }
        }
    }

    printf("--------------------\n");  
    printf("Números de negativos: %d\n", contadorDeNegativo);
    printf("--------------------\n");  

    for (int i = 0; i < LINES; i++){
        for (int j = 0; j < COLUMNS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");  
    }

    return 0;
}