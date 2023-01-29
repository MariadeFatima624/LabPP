/*
Arquivo: fatorial.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 3
*/
#include <stdio.h>

int main(void){
    int numero;
    long fatorial = 1;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &numero);
    
    if(numero >1){
        for(int i=1; i<= numero; i++){
            fatorial = fatorial * i;
        }
        printf("%d! = %ld", numero, fatorial);
    }
    return 0;
}

/*Podemos calcular o fatorial de 12, mas não o de 13 com um int porque o fatorial de 13 excede os 4 bytes de memória ofertados pelo int.*/