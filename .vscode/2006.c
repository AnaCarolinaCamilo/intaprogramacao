#include <stdio.h>
 
int main() {
 
    int type,A,B,C,D,E,count;

    while(scanf("%d",&type) != EOF)
    {
        scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
            count = 0;
            if (A == type)count++;
            
            if (B == type)count++;
            
            if (C == type)count++;
            
            if (D == type)count++;
            
            if (E == type)count++;
            printf("%d\n",count);   
    }   
 
    return 0;
}