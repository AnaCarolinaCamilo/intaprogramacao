#include <stdio.h>
#include <stdlib.h>

int main (void){
    char c;
    int t1,razao, numero, soma, t, i;
    printf("Digite o tipo de progressao [a] aritmetrica [g] geometrica: \n");
    scanf("%c",&c);
    printf("Digite o primeiro termo da progressao: \n");
    scanf("%d",&t1);
    printf("Digite a razao da progressao: \n");
    scanf("%d",&razao);
    printf("Digite a quantidade de termos da progressao: \n");
    scanf("%d",&numero);

    soma = 0;
    t = t1;
    for (i = 1; i <= numero; i = i + 1)
    {
        printf("termo %d: %d\n", i, t);
        if (c == 'a')
        {
            t = t + razao;
        }
        else
        {
            t = t * razao;
        }
        
    }

    return 0;
    


}