#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float nota1,nota2,nota3,nota4,media;
    int p1,p2,p3,p4; 
    p1= 1;
    p2 = 2;
    p3 = 3;
    p4 = 4;
    printf("Digite a nota do 1º bimestre: ");
    scanf("%f", &nota1);
    printf("Digite a nota do 2º bimestre: ");
    scanf("%f", &nota2);
    printf("Digite a nota do 3º bimestre: ");
    scanf("%f", &nota3);
    printf("Digite a nota do 4º bimestre: ");
    scanf("%f", &nota4);

    media = (nota1 * p1 + (nota2 * p2 + (nota3 * p3 + (nota4 * p4)))) / (p1+p2+p3+p4);
    printf("A media do aluno  é: %f", media);

    return 0;



}