#include <stdio.h>
 
int main() {
 
    int test,amount,i, C,R,S,total;
    char type;
    double c,r,s;
    C = 0;
    R = 0;
    S = 0;
    scanf("%d",test);
    for ( i = 0; i < test; i++)
    {
        scanf("%d %c",&amount,&type);
        if (type == 'S') S += amount;
        else if(type == 'R') R += amount;
        else  C += amount;
    }
    total = C + S + R;
    c = (C * 100) / total;
    r = (R * 100) / total;
    s = (S * 100) / total;
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d \n",C);
    printf("Total de ratos: %d \n",R);
    printf("Total de sapos: %d \n",S);
    printf("Percentual de coelhos: %f \n",c);
    printf("Percentual de ratos: %f \n",r);
    printf("Percentual de sapos: %f \n",s);

 
    return 0;
}