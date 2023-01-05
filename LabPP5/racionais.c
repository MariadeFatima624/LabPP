/*
Arquivo: racionais.c
Autora: Maria de Fátima
Lista de exercícios - Médio 2
*/

#include <stdio.h>
#include <math.h>

float S(int n);

typedef struct numeros{
    int numerador, denominador;
}s_numeros;

int main(void){
    printf("Informe dois números racionais no formato numerador1 denominador1   numerador2 denominador2: ");
    s_numeros Q1, Q2;
    scanf("%d %d    %d %d", &Q1.numerador, &Q1.denominador, &Q2.numerador, &Q2.denominador);
    mdc1 = calc_mdc(Q1.numerador, Q1.denominador);
    mdc2 = calc_mdc(Q2.numerador, Q2.denominador);
    Q1.numerador= Q1.numerador/mdc1;
    Q1.denominador= Q1.denominador/mdc1;
    Q2.numerador= Q2.numerador/mdc2;
    Q2.denominador= Q2.denominador/mdc2;



    float aprox = S(n);
    printf("%f", S(n));
    return 0;
}

float S(int n){
    if(n==0) return 4;
    return (S(n-1)+4*(pow((-1),n)/(2*n+1)));
}


int calc_mdc(int a,int b){
    if(b==0) return a;
    return calc_mdc(b,a%b);
}
