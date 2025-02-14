#include <stdio.h>
#include <stdlib.h>

int main (void){

    float peso,altura,imc;
    
    printf("Digite seu peso em kg : ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
 
    imc = peso / (altura*altura);

    printf("O seu IMC eh: %f ", imc);

    return 0;


}