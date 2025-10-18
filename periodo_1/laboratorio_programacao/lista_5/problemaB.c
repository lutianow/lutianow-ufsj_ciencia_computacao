
#include <stdio.h>
void eliminaNegativos(float v[], int t){
for(int i = 0; i < t; i++)
    if (2 * v[i] - 10 < 0)
        v[i] = 0;  
}

int main(){
    const int t = 2;
    //scanf("%d", &t);
    float v[t];

    for(int i = 0; i < t; i++){
        scanf("%f", &v[i]);
    }

    eliminaNegativos(v, t);
        
    for(int i = 0; i < t; i++){
        printf("%.2f\n", v[i]);
    }

    return 0;
}