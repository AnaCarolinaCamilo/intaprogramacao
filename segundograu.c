#include <stdio.h>
#include <math.h>

int main (void) {

    int a,b,c;
    float delta,x1,x2;
    
    printf("Digite o valor de a: ");
    scanf("%d" , &a);
    printf("Digite o valor de b: ");
    scanf("%d" , &b);
    printf("Digite o valor de c: ");
    scanf("%d" , &c);
 

    if (a == 0) {
        printf("equacao invalida");
        return 1;
    }
    
    delta = b*b - 4*a*c;

    printf("Delta = %.3f\n",delta);

    if (delta >= 0.0) {
        x1 = (-b + sqrt(delta))/ 2 * a;
        x2 = (-b - sqrt(delta))/ 2 * a;
    }
   
    if (delta > 0.0) {
        printf("x1 = %.3f\n x2= %.3f\n",x1,x2);
    
        
    }
    else if (delta == 0.0) {
        printf("x1 = x2 = %.3f",x1);
    
    }
    else {
         printf("a equacao nao tem raizes reais");
        return 2;
    } 

    return 0;

    
    
    
  
    
    
        

}