/**************************************  
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao 
* Aluno: Robert Voss Junior - matricula: 0050012982 
* Professor: Alex Salgado 
***************************************/

#include<stdio.h>

int main()
{

int i=0, j=0;
int l, h;
int continuar=0;
char c, fim;

while( continuar == 0 )
{
  printf("Diga a largura: \n");
  scanf("%d",&l);
  
  printf("Diga a altura: \n");
  scanf("%d",&h);
  
  printf("Diga o simbolo: \n" );
  scanf(" %c",&c);
  
  printf("Olá meu Nome é Robert Voss Junior e esse é meu Retângulo:\n");

for(j; j<h; j++){
    for(i; i<l; i++){
		if( j == 0 || j == h - 1 || i == 0 || i == l - 1){
			printf(" %c ", c);}
		else {
			printf("   ");}
        }              
i=0;
printf( "\n" );               
}        
	printf("Deseja continuar ?   digite (1) para sim e (2) para encerrar o progama ?\n");
    scanf(" %c", &fim);
        
    if( fim == '2' ){ 
		continuar = 1;}
            }

return 0;
}