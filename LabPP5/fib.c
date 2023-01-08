/*
Arquivo: fib.c
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include <stdio.h>

int fibonacci(int n);

int main(void){
    printf("Escolha um número inteiro: ");
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n){
    if(n==0) return 0;
    if(n== 1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
