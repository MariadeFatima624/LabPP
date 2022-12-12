/*
Arquivo: somaGauss.c
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include <stdio.h>

int main(void){
  int numero;
  int r = 0;
  int i = 0;

  printf("Digite um numero maior que 1: ");
  scanf("%d", &numero);

  for(i = 0; i<= numero; i++){
    r += i;
  };
  printf("Resultado da soma de Gauss para %d: %d", numero, r);

  return 0;
}