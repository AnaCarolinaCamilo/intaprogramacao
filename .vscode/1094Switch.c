#include <stdio.h>
 
int main() {
 
    int test,amount,i,C,R,S,total;
    char type;
    double c,r,s;
    C = 0;
    R = 0;
    S = 0;
    scanf("%d",&test);
    for ( i = 0; i < test; i++)
    {
        scanf("%d %c",&amount,&type);
        switch (type)
        {
        case 'S':
        S += amount;
            break;
        case 'R':
        R += amount;
             break;
        case 'C':
        C += amount;
            break;
        
        default:
            break;
        }
    }
    total = C + S + R;
    c = (C * 100.0) / (total*1.0);
    r = (R * 100.0) / (total*1.0);
    s = (S * 100.0) / (total*1.0);
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d \n",C);
    printf("Total de ratos: %d \n",R);
    printf("Total de sapos: %d \n",S);
    printf("Percentual de coelhos: %.2lf %%\n",c);
    printf("Percentual de ratos: %.2lf %%\n",r);
    printf("Percentual de sapos: %.2lf %%\n",s);

 
    return 0;
}