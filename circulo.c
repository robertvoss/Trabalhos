#include <stdio.h>
 
void line (int r);
void vertical (int r);
 
 
int main()
{
    int r;
     
    printf("radius: ");
    scanf("%d", &r);
     
    line(r);
    printf("\n");
    vertical(r-1);
    printf("\n");
    line(r);
     
    return 0;
}
 
void line(int r)
{
    int i,j;
     
    for ( i=1; i<=r-1; i++){
        if( (r-i)>=2 )
            printf(".");
        else{
            for(j=0;j<3;j++)
                printf("x");
        }
    }
}
 
void vertical(int r)
{
    int i,j,k;
     
    for ( i=1; i<=r-1; i++){
        if( (r-i)>=2 )
            printf(".\n");
        else{
            for(j=0;j<3;j++)
                printf("x\n");
            for(k=0; k<r-2; k++){
                printf("\n");
                printf(".");
            }
        }
         
    }   
}