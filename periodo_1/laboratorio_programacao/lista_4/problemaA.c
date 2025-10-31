#include <stdio.h>
#include <string.h> 

int main(){
    int feedbacks, i, tipoFeedback; 
    scanf("%d", &feedbacks);
    for(i = 0; i < feedbacks; i++){
        scanf("%d", &tipoFeedback);
        switch (tipoFeedback)
        {
        case 1:
            printf("Rolien\n");
            break;
        
        case 2:
            printf("Naej\n");
            break;
        case 3:
            printf("Elehcim\n");
            break;
        case 4:
            printf("Odranoel\n");
            break;
        default:  
            printf("Inválido\n");
            break;
        }    
    }

    return 0;
}