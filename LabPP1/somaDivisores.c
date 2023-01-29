/*
Arquivo: imc.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 1
*/
#include <stdio.h>

int main(void){
    int n;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int d = 1; d<= n; d++){
        if(n % d == 0){
            soma = soma + d;
        }
    }

    printf("Soma dos divisores: %d", soma);

    return 0;
    }