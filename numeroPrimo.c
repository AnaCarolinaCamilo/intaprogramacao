#include <stdio.h>


int main(void)
{
  int numero;
  int i, count;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  count = 0;
  for ( i = 1; i <= numero; i = i + 1)
  {
    if (numero % i == 0)
    {
      count = count + 1;
    }
    
  }
  if (count == 2)
  {
    printf("%d e primo! \n", numero);
  }
  else{
    printf("%d nao e primo.\n", numero);
  }
  
  return 0;
  
}
