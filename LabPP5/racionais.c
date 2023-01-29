/*
Arquivo: racionais.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 2
*/

#include <stdio.h>

int calc_mdc(int a,int b);
void ajustaQ(int *p, int *q, int mdc);

typedef struct numeros{
    int numerador, denominador;
}s_numeros;

int main(void){
    s_numeros Q1, Q2;
    printf("Informe o primeiro número racional no formato numerador1 denominador1:\n");
    scanf("%d %d", &Q1.numerador, &Q1.denominador);
    printf("Informe o segundo número racional no formato numerador2 denominador2:\n");
    scanf("%d %d", &Q2.numerador, &Q2.denominador);
    int mdc1 = calc_mdc(Q1.numerador, Q1.denominador);
    int mdc2 = calc_mdc(Q2.numerador, Q2.denominador);
    ajustaQ(&Q1.numerador, &Q1.denominador,mdc1);
    ajustaQ(&Q2.numerador, &Q2.denominador,mdc2);

    s_numeros soma, subtracao, multiplicacao, divisao;
    int d = Q1.denominador*Q2.denominador;
    soma.numerador = (Q1.numerador*Q2.denominador)+(Q2.numerador*Q1.denominador);
    soma.denominador = d;
    subtracao.numerador = (Q1.numerador*Q2.denominador)-(Q2.numerador*Q1.denominador);
    subtracao.denominador = d;
    multiplicacao.numerador = Q1.numerador*Q2.numerador;
    multiplicacao.denominador = d;
    divisao.numerador = Q1.numerador*Q2.denominador;
    divisao.denominador = Q1.denominador*Q2.numerador;

    int mdcSoma = calc_mdc(soma.numerador, soma.denominador);
    int mdcSub = calc_mdc(subtracao.numerador, subtracao.denominador);
    int mdcMult = calc_mdc(multiplicacao.numerador, multiplicacao.denominador);
    int mdcDiv = calc_mdc(divisao.numerador, divisao.denominador);

    ajustaQ(&soma.numerador, &soma.denominador,mdcSoma);
    ajustaQ(&subtracao.numerador, &subtracao.denominador,mdcSub);
    ajustaQ(&multiplicacao.numerador, &multiplicacao.denominador,mdcMult);
    ajustaQ(&divisao.numerador, &divisao.denominador,mdcDiv);


    printf("%d/%d ",Q1.numerador, Q1.denominador);
    printf("%d/%d ",Q2.numerador, Q2.denominador);
    printf("%d/%d ",soma.numerador, soma.denominador);
    printf("%d/%d ",subtracao.numerador, subtracao.denominador);
    printf("%d/%d ",multiplicacao.numerador, multiplicacao.denominador);
    printf("%d/%d",divisao.numerador, divisao.denominador);
    printf("\n");

    return 0;
}

void ajustaQ(int *n, int *d, int mdc){
    *n= *n/mdc;
    *d= *d/mdc;
    
    if(*n == 0) *d=1;

    if(*d < 0){
        *d *= (-1);
        *n *= (-1);
    }
}

int calc_mdc(int a,int b){
    if(b==0) return a;
    return calc_mdc(b,a%b);
}
