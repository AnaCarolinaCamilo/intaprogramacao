#include <stdio.h>
 
int main() {
 
    float nota1,nota2,nota3,nota4,nota5;
    double avg1,avg2;
    scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);
    avg1 = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + nota4) / 10;
    printf("Media: %.1lf\n",avg1);
    if (avg1 >= 7.0) printf("Aluno aprovado.\n");
    else if (avg1 < 5.0) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &nota5);
        printf("Nota do exame: %.1lf\n",nota5);
        avg2 = (avg1 + nota5)/2.0;     
        if (avg2 >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",avg2);
        
    }
    return 0;
    
    
}