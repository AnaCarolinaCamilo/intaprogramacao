#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int saque, quant1,quant2,quant3,quant4,quant5,quant6,quant7;
    printf("Qual o valor a ser sacado? ");
    scanf("%d", &saque);

    quant1 = saque/100;
    saque = saque - quant1 * 100;
    
    quant2 = saque/50;
    saque = saque - quant2 * 50;

    quant3 = saque/20;
    saque = saque - quant3 * 20;

    quant4 = saque/10;
    saque = saque - quant4 * 10;

    quant5 = saque/5;
    saque = saque - quant5 * 5;

    quant6 = saque/2;
    saque = saque - quant6 * 2;

    quant7 = saque;
    
    printf(" \n Voce vai receber %d notas de 100 reais, %d notas de 50 reais, %d notas de 20 reais, %d notas de 10 reais,%d notas de 5 reais, %d notas de 2 reais e %d moeda(s) de 1 real \n" ,quant1,quant2,quant3,quant4,quant5,quant6,quant7);
    
    system("pause");
    return 0;




    


}