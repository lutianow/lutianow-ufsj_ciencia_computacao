#include <stdio.h>

void juntaDoisVetores(int v1[], int v2[], int vf[], int t1, int t2){
    for(int i = 0; (i < t2); i++)
        vf[i] = v2[i];

    for(int i = t1 - 1, j = 0; (i >= 0); i--, j++)
        vf[j + t2] = v1[i];
}
int main(){
    int qtde_v1, qtde_v2, soma_qtde = 0;

    scanf("%d", &qtde_v1);
    int vetor1[qtde_v1];
    for (int i = 0; i < qtde_v1; i++)
        scanf("%d", &vetor1[i]);

    scanf("%d", &qtde_v2);
    int vetor2[qtde_v2];
    for (int i = 0; i < qtde_v2; i++)
        scanf("%d", &vetor2[i]);
    
    soma_qtde = qtde_v1 + qtde_v2;

    int vetor[soma_qtde];
    juntaDoisVetores(vetor1, vetor2, vetor, qtde_v1, qtde_v2);

    printf("soma: %d\n", soma_qtde);
    for (int i = 0; i < soma_qtde; i++)
        printf("%d\n", vetor[i]);
    
    return 0;
}