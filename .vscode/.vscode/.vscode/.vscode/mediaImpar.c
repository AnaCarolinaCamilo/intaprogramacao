#include <stdio.h>
#include <math.h>
// construa uma função que pegue a media de numeros impares no array 
double MediaImpares (const int ar[], int i)
{
    double media;
    int counter;
    counter = 0;
    double soma = 0;
    for (int j = 0; j < i; j++)
    {
        if (ar[j] % 2 != 0)
        {
         counter++;
         soma += ar[j];
        }
        
    }
    if (counter == 0){
        return 0;
    }
    media = soma/counter;
    return media;
}
int main(void)
{   
    int numeros[] = {5,6,5};
    double mediaImpar;

    mediaImpar = MediaImpares(numeros, 3);
    printf("%.1lf",mediaImpar);
    

    return 0;
}
