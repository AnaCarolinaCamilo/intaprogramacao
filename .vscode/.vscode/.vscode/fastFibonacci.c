#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    double fibonacci,y,x;
    scanf("%d",&n);
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;
    fibonacci = (pow(x,(n*1.0)) - pow(y,(n*1.0)))/sqrt(5);
    printf("%.1lf\n",fibonacci);
 
    return 0;
}