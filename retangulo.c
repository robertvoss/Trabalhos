/**************************************
* Trabalho 2 de Programacao de Computadores I - Retangulo
* Curso de Sistemas da informacao
* Aluno: Robert Voss Junior - matricula: 00000000
* Professor: Alex Salgado
***************************************/
#include <stdio.h>

int main(void)
{
int altura, largura, simbolo;

while(1){
printf("Diga a altura: ");
scanf("%d", &altura);
if ((altura >= 3) && (altura <= 20))
break;
}

while(1){
printf("Diga a Largura: ");
scanf("%d", &largura);
if ((largura >= 3) && (largura <= 20))
break;
}

printf("Diga o simbolo: ");
scanf("%d", &simbolo);
 for (simbolo = 32; simbolo <= 126; simbolo++)
    {
        printf("%c [%d]\n", simbolo, simbolo);
    }



/* ... */

return 0;
}