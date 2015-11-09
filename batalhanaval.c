/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Robert Voss Junior - matricula: 0050012982 
* Professor: Alex Salgado 
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int mapa [5][5] = { {1,0,1,0,0},
    	                {0,1,0,1,0},
    					{1,0,0,0,1},
    					{0,1,0,0,1},
    				    {1,0,1,0,1}};
    int randint = rand() % 2;
    int i, j; // i -> linha , j -> coluna
    char game [5][5];
    char name [50];
    int continuar = 1;
    int pontos = 0;
    printf("Digite o seu nome?\n");
    scanf("%s" ,name);
    
    for(i=1; i<6; i++)
        {
            for(j=1; j<6; j++)
                {
                    game[i][j] = '.';
                }
        }

    printf("Entre com as coordenadas,\n\n");
    printf("Numero da linha:\n");
    scanf ("%d", &i);
    printf("Numero da Coluna:\n");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
        {
            game[i][j] = 'X';
            pontos ++;
            printf("Bomba!!! ");
            printf("Você ganhou %d ponto(s)\n", pontos);
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    else
        {
            game[i][j] = 'O';
            printf("Agua!!, que pena\n");
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    for(i=1; i<6; i++)
            { 
    for(j=1; j<6; j++)
                {
    printf("%c  ", game[i][j]);
                }
    printf("\n");
            }
    // loop    
    while(continuar ==1)
       {
    printf("Numero da linha:\n");
    scanf ("%d", &i);
    printf("Numero da Coluna:\n");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
        {
            game[i][j] = 'X';
            pontos ++;
            printf("Bomba! ");
            printf("Você ganhou %d ponto(s)\n", pontos);
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
        }
    else
        {
            game[i][j] = 'O';
            printf("Agua!!, que pena\n");
            printf("Deseja Continuar? 1 = Sim / 0= Não:");
            scanf("%d", &continuar);
                }
    for(i=1; i<6; i++)
                    { 
    for(j=1; j<6; j++)
                        {
    printf("%c  ", game[i][j]);
                        }
    printf("\n");
                    }
       }
    printf("Olá %s" ,name);
    printf(" você fez %d pontos.\n", pontos);

return 0;

}