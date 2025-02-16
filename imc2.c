#include <stdio.h>
#include <stdlib.h>

int main (void){

    float peso,altura,imc;
    
    printf("Digite seu peso em kg : ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
 
    imc = peso / (altura*altura);
    
    if (imc <= 18.5){
        printf("Usuario esta abaixo do peso");
    }
    else if (imc > 18.5 && imc <= 25){
        printf("Usuario esta com peso normal");
    }
    else if (imc > 25 && imc <= 30){
        printf("Usuario esta com sobrepeso");
    }
    else{
        printf("Usuario esta com obesidade");
    }
  
     return 0;
}