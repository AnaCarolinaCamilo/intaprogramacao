#include <stdio.h>
#include <stdlib.h>

int main (void) {

int valor,segundos,minutos,horas,resto;

printf("Digite um valor de tempo em segundos: ");
scanf("%d", &valor);

horas = valor / 3600;
resto = valor % 3600;
minutos = resto / 60;
segundos = resto % 60;

printf("O tempo em segundos resulme em %d horas, %d minutos e %d segundos",horas,minutos,segundos);

return 0;

}
