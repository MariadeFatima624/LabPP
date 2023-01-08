/*
Arquivo: mdc.c
Autora: Maria de Fátima
Lista de exercícios - Básico 1
*/

#include <stdio.h>

int calc_mdc(int a,int b);

int main(void){
    printf("Escolha dois números inteiros: ");
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", calc_mdc(a,b));
    return 0;
}

int calc_mdc(int a,int b){
    if(b==0) return a;
    return calc_mdc(b,a%b);
}
