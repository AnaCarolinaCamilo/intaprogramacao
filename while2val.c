#include <stdio.h>

int main()
{
    int num1, num2, i, num;
    printf("Escreva o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Escreva o segundo numero: \n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        num = num1;
        num1 = num2;
        num2 = num;
    }
    
    i = num1;
    while (i <= num2)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
    
}   