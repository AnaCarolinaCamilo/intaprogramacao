#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float nota1,nota2,nota3,media;

    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo bimestre: ");
    scanf("%f", &nota2);
    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f", &nota3);


    media = (nota1+nota2+nota3) / 3;
    printf("A media do aluno  eh: %.1f", media);

    return 0;



}