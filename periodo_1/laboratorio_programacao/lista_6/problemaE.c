#include <stdio.h>  

#define LINES 10
#define COLUMNS 10

int main(){
    int matriz[LINES][COLUMNS] = {{0, 1, 1, 1, 1, 1, 0, 0, 0, 1},
                                  {1, 0, 0, 1, 1, 0, 0, 0, 1, 0},
                                  {1, 0, 0, 0, 1, 1, 0, 0, 1, 1},
                                  {1, 1, 0, 0, 1, 0, 0, 0, 0, 1},
                                  {1, 1, 1, 1, 0, 1, 0, 0, 1, 0},
                                  {1, 0, 1, 0, 1, 0, 0, 0, 1, 0},
                                  {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                                  {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                                  {0, 1, 1, 0, 1, 1, 0, 0, 0, 0},
                                  {1, 0, 1, 1, 0, 0, 0, 0, 0, 0}};

    int pessoa1, pessoa2;
    scanf("%d %d", &pessoa1, &pessoa2);

    for (int i = 0; i < LINES; i++){
        if (matriz[i][pessoa1] == 1 && matriz[i][pessoa2] == 1) 
            printf("%d ", i);
    }

    return 0;
}