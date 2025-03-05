#include <stdio.h>

int main()
{
    int num, soma, i;
    float media;

    printf("Digite um valor: \n");
    scanf("%d", &num);

    num = -1;
    soma = 0;
    i = 0;
    while ( num != 0 )
    {
        printf("Digite um valor: \n");
        scanf("%d", &num);
        soma = soma + num;
        i = i + 1;

    }
    i = i - 1;
    if (i > 0)
    {
        media = (soma * 1.0) / i;
        printf("A media de valores eh: %.1f \n", media);
    }
    
    return 0;
    
}   