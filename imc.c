#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("\nQual seu peso?");
    scanf("%f", &peso);
    
    printf("\nQual sua altura?");
    scanf("%f", &altura);
    
    imc = peso / (altura*altura);
    printf("Seu imc foi %f", imc);
    
    if (imc>20, imc<25) printf("-Seu peso esta bom");
     else if (imc>26, imc<30) printf("-Voce esta acima do peso");
        else if (imc>31) printf("-Voce esta obeso");
        
    return 0;
    
}