/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int valor1,valor2,valor3;
   printf("Digite o primeiro valor: \n");
   scanf("%d",&valor1);
   printf("Digite o segundo valor: \n");
   scanf("%d",&valor2);
   printf("Digite o terceiro valor: \n");
   scanf("%d",&valor3);
   
   if(valor1 > valor2 && valor1 > valor3){
       printf("O primeiro valor (%d) é o maior \n",valor1);
   }
   else if(valor2 > valor1 && valor2 > valor3){
       printf("O segundo valor (%d) é o maior \n",valor2);
   }
   else if(valor3 > valor1 && valor3 > valor2){
       printf("O terceiro valor (%d) é o maior\n",valor3);
   }
   else{
       printf("Numeros invalidos");
   }
   
    return 0;
}