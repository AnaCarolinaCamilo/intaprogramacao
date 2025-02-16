#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto,count;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
    count = 0;
	while (palpite != correto) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        count = count + 1;

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
            
	}
    printf("Voce acertou com %d palpites",count);
	return 0;
}