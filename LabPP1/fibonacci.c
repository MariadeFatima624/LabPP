/*
Arquivo: fibonacci.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 2
*/

#include <stdio.h>

int main(void){
int n;
printf("Digite um numero: ");
scanf("%d", &n);
for(int m = 0, i = 0, j = 1, t = 0; m < n; m++, t = i+j, i=j, j=t )printf("%d, ", i);
printf("...");
return 0;
}