#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    char sexo;
    float altura;
    float pesoIdeal;
    
    printf("Digite o seu sexo M(masculino) F(feminino):  ");
    scanf("%c", &sexo);
    printf("Digite a sua altura em metros:  ");
    scanf("%f", &altura);

    if (sexo=='F'){
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("\nSeu peso ideal é %2.f kg", pesoIdeal);

    }
    else if (sexo == 'M'){
        pesoIdeal = (72.7 * altura) -58;
        printf("\nSeu peso ideal é %2.f kg", pesoIdeal);

    }
    else{
        printf("\nInforme um sexo válido");
    }

    return 0;
    
}