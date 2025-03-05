#include <stdio.h>
 
int main() {
 
    int a=1,b=2,c=3,numero,pum;
    scanf("%d", &numero);
    for(pum = 0; pum < numero; pum++){
        printf("%d %d %d PUM\n",a ,b,c);
        a+= 4;
        b+= 4;
        c+= 4;
    }
    return 0;
}