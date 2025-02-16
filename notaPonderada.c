#include <stdio.h>
#include <stdlib.h>

int main (void){

    float nota1,nota2,nota3,nota4,nota5,nota6;
    float notaUnidade1,notaUnidade2,notaUnidade3,notaFinal;

    printf("Digite as notas da primeira disciplina: \n");
    scanf("%f %f %f", &nota1,&nota2,&nota3);
    printf("Digite as notas da segunda disciplina: \n");
    scanf("%f %f %f", &nota4,&nota5,&nota6);

    if (nota1 > nota4 || nota2 > nota5 ||nota3 > nota6 ) 
    {
        notaUnidade1 = ((6 * nota1) + (4 * nota4)) / (6 + 4);
        notaUnidade2 = ((6 * nota2) + (4 * nota5)) / (6 + 4);
        notaUnidade3 = ((6 * nota3) + (4 * nota6)) / (6 + 4);
    }
    else if(nota4 > nota1 || nota5 > nota2 || nota6 > nota3)
    {
        notaUnidade1 = ((6 * nota4) + (4 * nota1)) / (6 + 4);
        notaUnidade2 = ((6 * nota5) + (4 * nota2)) / (6 + 4);
        notaUnidade3 = ((6 * nota6) + (4 * nota3)) / (6 + 4);
    }
    else if(nota1 == nota4 || nota2 == nota5 || nota3 == nota6)
    {
        notaUnidade1 = ((6 * nota1) + (4 * nota4)) / (6 + 4);
        notaUnidade2 = ((6 * nota1) + (4 * nota4)) / (6 + 4);
        notaUnidade3 = ((6 * nota1) + (4 * nota4)) / (6 + 4);
    }
    else
    {
        printf("Notas inválidas");
    }

    notaFinal = (notaUnidade1 + notaUnidade2 + notaUnidade3) / 3;

    if (notaFinal >= 9.0 && notaFinal <= 10.0)
    {   
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito A\n",notaFinal);
    }
    else if (notaFinal >= 8.0 && notaFinal < 9.0)
    {
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito B\n",notaFinal);
    }
    else if (notaFinal >= 7.0 && notaFinal < 8.0)
    {
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito C\n",notaFinal);
    }
    else if (notaFinal >= 6.0 && notaFinal < 7.0)
    {
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito D\n",notaFinal);
    }
    else if (notaFinal >= 5.0 && notaFinal < 6.0)
    {
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito E\n",notaFinal);
    }
    else{
        printf("Nota da primeira unidade: %.2f\n",notaUnidade1);
        printf("Nota da segunda unidade: %.2f\n",notaUnidade2);
        printf("Nota da terceira unidade: %.2f\n",notaUnidade3);
        printf("Nota final: %.2f Conceito F\n",notaFinal);
    }   

    return 0;
    

    
}