#include <stdio.h>
 
int main() {
 
    double salario;
    scanf("%lf", &salario);
    
    if( salario >= 0.00 && salario <= 2000.00){
        printf("Isento\n");
    }
    else if(salario >= 2000.01 && salario <=3000.00){
        salario = salario - 2000.00;
        salario = (salario*8)/100;
         printf("R$ %.2f\n", salario);
    }
    else if(salario >= 3000.01 && salario <=4500.00){
        salario = salario - 3000.00;
        salario = (salario*18)/100;
         printf("R$ %.2f\n",salario + 80);
        
    }
    else if(salario > 4500.01) {
        salario = salario - 4500.00;
        salario = (salario*28)/100;
         printf("R$ %.2f\n",salario + 80 + 270);
    }
   
        return 0;
    
}