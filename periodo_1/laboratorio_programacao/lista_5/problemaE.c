#include <stdio.h>

void retornarGenomaPreenchidoSequencialmente(int genoma[], int numeroGenes){
    for (int i = 0; i < numeroGenes; i++)
        genoma[i] = i + 1;
}

void retornarGenomaModificado(int genomaOriginal[], int genomaModificado[], int numeroInversoes, int numeroGenes){
    for (int i = 0; i < numeroInversoes; i++)
    {
        int inicio, fim;
        scanf("%d %d", &inicio, &fim);
        inicio--;
        fim--;
        for (int j = 0; j < numeroGenes; j++)
        {
            if (j >= inicio && j <= fim)
                genomaModificado[j] = genomaOriginal[fim + inicio - j];        
            else
                genomaModificado[j] = genomaOriginal[j]; 
        }

        for (int j = 0; j < numeroGenes; j++)
            genomaOriginal[j] = genomaModificado[j];        
  
    }    

}

void preencherArrayConsutas(int arrayConsultas[], int numeroConsultas){
    for (int i = 0; i < numeroConsultas; i++){           
        scanf("%d", &arrayConsultas[i]);
    }
}

int main(){
    int nGenes, nInversoes, nConsultas, ordemGenoma = 1;
    scanf("%i", &nGenes);

    while (nGenes > 0) {
        if (ordemGenoma > 1)
            scanf("%i", &nGenes);

        if (nGenes == 0 || nGenes > 50000)
            return 0;

        scanf("%d", &nInversoes);    
        if (nInversoes < 0 || nInversoes > 1000)
            return 0;
  
        int genoma[nGenes];    
        retornarGenomaPreenchidoSequencialmente(genoma, nGenes);

        int genomaModificado[nGenes];  
        retornarGenomaModificado(genoma, genomaModificado, nInversoes, nGenes);  
        
        scanf("%d", &nConsultas);
        int consultas[nConsultas];
        preencherArrayConsutas(consultas, nConsultas);

        for (int i = 0; i < nConsultas; i++){  
            if (i == 0)   
                printf("Genome %d\n", ordemGenoma);    

            printf("%d\n", genomaModificado[consultas[i] - 1]);
        } 

        ordemGenoma++;
    }  

    return 0;
}