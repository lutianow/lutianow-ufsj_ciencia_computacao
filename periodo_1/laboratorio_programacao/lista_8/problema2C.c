#include <stdio.h>
#include <string.h>

typedef struct {
   char cpf[20];
   char nome[50];
} cliente;

void procuraCliente(cliente cliente[], char cpf[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if (!strcmp(cliente[i].cpf, cpf)){
            printf("%s\n", cliente[i].nome);
            break;
        }
   }
}
int main(){
   cliente c[10];
   char cpf[20];
   fgets(cpf, 20, stdin);
   for(int i = 0; i < 10; i++){
       fgets(c[i].cpf, 20, stdin);
       fgets(c[i].nome, 50, stdin);
   }
   procuraCliente(c, cpf, 10);
   return 0;
}