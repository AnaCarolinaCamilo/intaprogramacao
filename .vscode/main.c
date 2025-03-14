/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
const char * MeuNome(){
    return "Carolina";
}
int EhPrimo(int n){
    for(int i = 2; i < n; i++){
        if(i % 2 == 0){
            return 0;
        }
    }
}
int ValorDeFibonacci(int n){
        int x;
        
        if (n == 1) {
          return(1);
        }
        
        if (n == 2) {
          return(1);
        }
        
        x = ValorDeFibonacci(n-1) + ValorDeFibonacci(n-2);
        return(x);
      }
int main()
{
    int n, ehprimo,fibonacci;
    n = 5;
    ehprimo = EhPrimo(n);
    fibonacci = ValorDeFibonacci(n);
    printf(MeuNome());
    printf("\n%d\n",ehprimo);
    printf("%d\n",fibonacci);

   

    return 0;
}