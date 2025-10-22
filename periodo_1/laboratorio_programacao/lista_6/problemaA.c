#include <stdio.h>  

int main(){
    const COLUMNS = 2;
    const LINES = 2;
    int matriz[LINES][COLUMNS];

    int valor, contadorDeImpar = 0;

    srand(time(NULL));
    for (int i = 0; i < LINES; i++)
        for (int j = 0; j < COLUMNS; j++)
        {
            
            valor = rand() % 101;
            matriz[i][j] = valor;
        }


    for (int i = 0; i < LINES; i++){
        for (int j = 0; j < COLUMNS; j++){
            if (matriz[i][j] % 2 != 0)
                contadorDeImpar++;  

            printf("%03d ", matriz[i][j]);
        }
        printf("\n");  
    }

    printf("--------------------\n");  
    printf("Números de ímpares: %d\n", contadorDeImpar);
    printf("--------------------\n");  

    return 0;
}