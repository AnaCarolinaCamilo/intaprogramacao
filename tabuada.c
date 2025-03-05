#include <stdio.h>

int main(void){

int num;
scanf("%d",&num);
for(int i = 1; i < 11; i++){
    printf("%d x %d = %d\n",i,num,i*num);
}

return 0;
}