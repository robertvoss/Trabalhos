/**************************************  
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao 
* Aluno: Robert Voss Junior 
* Professor: Alex Salgado 
***************************************/

#include <stdio.h>


int main(void)
{
    int linhas, colunas, x, y;
    
    while(1)
    {
        printf("Diga o numero de linhas: ");
        scanf("%d", &linhas);
        if ((linhas < 3) || (linhas > 20))
            continue;
        printf("Diga o numero de colunas: ");
        scanf("%d", &colunas);
        
        if ((colunas < 3) || (colunas > 20))
        continue;
        break;
    }
    for (x = 0; x < linhas; x++) 
    { 
        for (y = 0; y < colunas; y++) 
        {
            if (x == 0 || x == linhas - 1)            
            {
                if (y == 0)  
                printf("*");
                if (y == colunas - 1)
                printf("*\n");
                else
                printf("*");
            }
        
            else
            {
                if (y == 0)  
                printf("*");
                if (y == colunas - 1)
                printf("*\n");
                else
                printf(" ");
            }   
        }
    }    
     printf("Olá, meu nome eh Robert e meu retangulo ficou assim.");
     

return 0;
}