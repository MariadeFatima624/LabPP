/*
Arquivo: aproxpi.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 1
*/

#include <stdio.h>
#include <math.h>

float S(int n);

int main(void){
    printf("Escolha um número inteiro: ");
    int n;
    scanf("%d", &n);
    float aprox = S(n);
    printf("%f", S(n));

    return 0;
}

float S(int n){
    if(n==0) return 4;
    return (S(n-1)+4*(pow((-1),n)/(2*n+1)));
}
