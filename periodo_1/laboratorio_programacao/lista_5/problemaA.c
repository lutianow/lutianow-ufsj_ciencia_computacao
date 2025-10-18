#include <stdio.h>

int main(){
    int vetor[10], i, soma = 0;

    for(i = 0; (i < 10); i++){

        scanf("%d", &vetor[i]);

        if (i == 0 || i == 1 || i == 8)  
            soma += vetor[i];

        if (vetor[i] % 2 != 0){
            vetor[i] = 0;
        }
    }

    printf("soma: %d\n", soma);

    for(i = 0; (i < 10); i++)
        printf("%d\n", vetor[i]);
   
    return 0;
}