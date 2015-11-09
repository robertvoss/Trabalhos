#include <stdio.h>

int main()
{

    float av1; //nota da av1
    float av2; 
    float media; 
    

    
    //atribuir valores av1 e av2
    printf("\nEntre com a av1:");
    scanf("%f", &av1);
    
    printf("\nEntre com a av2:");
    scanf("%f", &av2);
    
    
    //calcular media
    media = (av1 + av2)/2;
    
    //imprimir o resultado
    printf("Sua media foi %f", media);
    
    return 0;
}