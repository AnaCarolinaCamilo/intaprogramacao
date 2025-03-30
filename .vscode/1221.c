#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ePrimo(long n ,int nn)
{
  static long divs = 0;
  
  if (nn > n)
    return n;
  
  if (n % nn == 0)
    divs++;
  
  ePrimo(n ,nn + 1);
  
  if (divs <= 2)
    return 1;
    return 0;
}

 int main(){
	int test; 
    scanf("%d",&test);
    long n = 0;

    do{
        printf("Digite um numero: ");
        scanf("%ld" ,&n);
        if (ePrimo(n ,1))
          printf("%ld e primo!" ,n);
        else
          printf("%ld nao e primo!" ,n);
        test--;
        
	}while (test > 0);
   
   return 0;
}
