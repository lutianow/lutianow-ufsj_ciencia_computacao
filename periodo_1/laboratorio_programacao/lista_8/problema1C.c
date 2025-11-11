#include <stdio.h>
#include <string.h>

char minuscula(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c; 
}

int main(){
    char l;
    do{
    scanf("%c", &l);
    if(l == '\n'){
    break;
    }
    printf("%c", minuscula(l));
    } while(1);
    return 0;
}