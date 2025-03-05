#include <stdio.h>
 
int main() {
 
    int test, numero, i, sum,j;
    sum = 0;

    scanf("%d", &test);

    for(j = 1; j < test; j++)
    {
        scanf("%d", &numero);
    for( i = 1; i < numero;i++)
    {
       if (numero % i == 0)
       {
           sum = sum + i;

       }
    
    }
    }
    
    if(sum == numero){
        printf("%d eh perfeito\n",numero);
    }
    else {
        printf("%d nao eh perfeito\n",numero);
    }
 
    return 0;
}