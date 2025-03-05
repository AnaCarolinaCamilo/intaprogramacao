#include <stdio.h>
 
int main() {
 
    int numero, i;
    scanf("%d", &numero);
    for( i = 1; i <= numero; i = i + 1)
    {
       if (numero % i == 0)
       {
           printf("%d\n", i);
       }
    
    }
 
    return 0;
}