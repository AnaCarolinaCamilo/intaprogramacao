#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto,count,tentativa;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
    count = 0;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        count = count + 1;
        tentativa = 5 - count;

            if (palpite > correto && tentativa != 0){
                printf("Palpite alto! Voce tem mais %d tentativa(s)\n",tentativa);
            }else if (palpite < correto && tentativa != 0){
                printf("Palpite foi baixo! Voce tem mais %d tentativa(s)\n",tentativa);
            }
            else{
                printf("Voce esgotou suas tentativas");
                return 0;
            }          
	}
    printf("Voce acertou com %d palpites",count);
	return 0;
}