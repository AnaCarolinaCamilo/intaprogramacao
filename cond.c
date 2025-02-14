#include <stdio.h>
#include <stdlib.h>

int main (void){

        float a,b;
        printf("Digite um número: ");
        scanf("%f", &a);
        printf("Digite um número: ");
        scanf("%f", &b);
        
        if (a>b)
        {
           printf(" \n%.1f é maior que %.1f",a,b);
        }else{
           printf(" \n%.1f é maior que %.1f",b,a);
        }

        return 0;


}