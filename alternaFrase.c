#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,count;
    for ( i = 1; i <=200; i++)
    {
        if (i % 2 == 0 )
        {
            printf("So aprende a programar quem escreve programas \n");            
        }
        else
        {
            printf("Quem nao escreve programas nao aprende a programar \n");
        }        
    }
    return 0;
}