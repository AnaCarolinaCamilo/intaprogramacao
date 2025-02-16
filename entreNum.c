#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i;
    for ( i = 1; i <= 1000; i++)
    {
        if (i % 6 == 0 && i % 10 == 4)
        {
            printf("%d\n",i);
        }
        
    }
}