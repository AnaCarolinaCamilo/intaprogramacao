/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero1,numero2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    
    if(numero1 == numero2){
        printf("Os numeros sao iguais\n");
    }
    else if(numero1 > numero2){
        printf("O segundo numero (%d) é o menor\n",numero2);
    }
    else if(numero1 < numero2){
        printf("O primeiro numero (%d) é o menor\n",numero1);
    }
    else{
        printf("Numeros invalidos\n");
    }

    return 0;
}