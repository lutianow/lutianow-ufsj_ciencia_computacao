#include <stdio.h>

struct filme
{
    int id;
    int duracao;
    int ano;
};


int main(){
    int n, ano, duracao;
    scanf("%d", &n);
    struct filme f[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &f[i].id, &f[i].duracao, &f[i].ano);    
    }

    scanf("%d %d", &duracao, &ano);
    
    for(int i = 0; i < n; i++){
        if (f[i].ano == ano && f[i].duracao == duracao){
            printf("%d\n", f[i].id);  
        }     
    }

    return 0;
} 