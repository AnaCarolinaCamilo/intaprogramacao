#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    float  diametro,raio,area,circunferencia;
    
    printf("Digite o diametro do circulo: \n");
    scanf("%f", &diametro);
    
    raio = diametro / 2;
    area = 3.14*(raio * raio);
    circunferencia = 2 * 3.14 * raio;
   
    printf("A area do circulo eh: %.2f ", area);
    printf("A circunferencia do circulo eh: %.2f ", circunferencia);


	return 0;
}