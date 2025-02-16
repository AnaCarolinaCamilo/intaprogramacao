#include <stdio.h>
#include <stdlib.h>

int main (void){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 15 && idade < 18 ) {
        printf("Esse usuario e uma pessoa jovem\n");
    }
    else if(idade >= 18 && idade <= 29){
        printf("Esse usuario e uma pessoa adulta e jovem\n");
    }
    else if(idade > 29 && idade < 60){
        printf("Esse usuario e uma pessoa adulta\n");
    }
    else if(idade >= 60){
        printf("Esse usuario e uma pessoa idosa\n");
    }
    else{
        printf("Esse usuario e uma crianca ou adolescente\n");
    }
   
    return 0;
      


}