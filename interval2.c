#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nLidos,i,nIn,nOut,numero;
    nIn = 0;
    nOut = 0;
    scanf("%d",&nLidos);
    for ( i = 0; i < nLidos; i++)
    {
       scanf("%d",&numero);
       if (numero>= 10 && numero <=20)
       {
        nIn++;
       }
       else{
        nOut++;
       }
       
    }
    printf("%d in\n",nIn);
    printf("%d out\n",nOut);
    
    return 0;
    
}