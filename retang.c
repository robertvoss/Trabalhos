#include <stdio.h>
#include <math.h>
 
int main(void) {
   char cRec;
   int X1, Y1; //Lugar do A
   int X2, Y2; //Lugar do B
   int i;         //Height
   int j;         //Width
 
   printf("Enter a character: ");
   scanf("%c", &cRec);
   printf("\n");
  
   printf("Enter Point One (closest to origin): ");
   scanf("(%d,%d)", &X1, &Y1);
   printf("\n");
  
   printf("Enter Point Two (farthest from origin): ");
   scanf("(%d,%d)", &X2, &Y2);
   printf("\n");
 
   for (j = X1; j <= X2; j++) {
      printf("%c\n", letterRectangle);
      for (i = Y1; i <= Y2; i++) {
         printf("%c", letterRectangle);
      }
   }
   return 0;
}