#include <stdio.h>
#include <stdlib.h>

int main(void){
    int age,soma;
    float media,i;

    soma = 0;
    i = 0;
    while (1)
    {
        scanf("%d", &age);
        if (age < 0)
        {
            break;
        }
        soma += age;
            i++;
        

    }
   
        media = (soma * 1.0) / i;
        printf("A media de valores eh: %.2f \n", media);
    
    return 0;
    
}