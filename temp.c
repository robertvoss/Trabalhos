#include <stdio.h>

int main()
{
    float celsius; //valor da temp
    float far;
    
    //atribuindo valores
    celsius = 30;
    
    //calculo
    far = (celsius*1.8)+32;
    
    //valor
    printf("30 graus celsius sao %f", far);
    
    return 0;
}