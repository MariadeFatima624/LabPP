/*
Arquivo: impares.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 2
*/

#include <stdio.h>

void impares(int a, int b);

int main(void){
    int a, b;

    printf("Escolha um os limites de um intervalo [a, b] (sendo a<b): ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("O primeiro número deve ser menor que o segundo. Escolha um novo intervalo:");
        scanf("%d %d", &a, &b);
    }

    impares(a,b);

    return 0;
}

void impares(int a, int b){
    int c=0;

    for(int i=a; i<=b; i++){
        if(i%2==1){
            printf("%s %d", c==0? "":",", i);
            if(c==0)c=1;   
         }
    }
    
}
