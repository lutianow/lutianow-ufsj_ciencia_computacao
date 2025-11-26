#include <stdio.h>

struct livro
{
    int isnb;
    int ano;
    double preco;
};

struct livro retornaLivroMaisCaro(struct livro l1, struct livro l2)
{
    if (l2.preco > l1.preco)
        return l2;
    else    
        return l1; 
};


int main(){
    struct livro l1, l2, l3;
    
    scanf("%d %d %lf", &l1.isnb, &l1.ano, &l1.preco);
    scanf("%d %d %lf", &l2.isnb, &l2.ano, &l2.preco);
    l3 = retornaLivroMaisCaro(l1, l2);

    printf("%d %d %0.2f\n", l3.isnb, l3.ano, l3.preco);

    return 0;
}