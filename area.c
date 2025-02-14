#include <stdio.h>

int main(void)
{
    int base;
    int altura;
    float area;
    
    printf("Digite a base do triangulo: \n");
    scanf("%d", &base);
    printf("Digite a altura do triangulo: \n");
    scanf("%d", &altura);
   
    area = (base * altura) / 2.0;
   
    printf("A area do triangulo eh %f", area);



	return 0;
}