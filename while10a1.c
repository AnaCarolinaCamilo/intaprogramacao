/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeros;
    numeros = 10;
    
    while(numeros <= 10 && numeros >= 1){
        printf("%d\n",numeros);
        numeros--;
    }
    
    return 0;
}