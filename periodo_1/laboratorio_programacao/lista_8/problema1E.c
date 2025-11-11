#include<stdio.h>
void imprimeTriangulo(int n, char l){
    for (int i = n; i > 0 ; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c", l);
        }
        printf("\n");
    }
}

int main () {
    int n;
    char l;
    scanf("%d %c", &n, &l);
    imprimeTriangulo(n, l);
    
    
    return 0;
}