#include <stdio.h>

int main()
{
    int num, maior, menor, primeiraVez;

    num = -1;
    primeiraVez = 1;
    while ( num != 0 )
    {
        printf("Digite um valor: \n");
        scanf("%d", &num);
        if (primeiraVez == 1)
        {
            maior = num;
            menor = num;
            primeiraVez = 0;
        }
        
        if (num != 0 && num > maior)
        {
            maior = num;
        }
        if (num != 0 && num < menor)
        {
            menor = num;
        }      
    }
    printf("Maior valor: %d\n Menor valor: %d\n",maior,menor);

    return 0;
    
    
}   