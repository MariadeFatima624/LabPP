/*
Arquivo: somaPrimos.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Médio 1
*/

#include <stdio.h>

int soma(int a, int b);
int primo(int n);

int main(void){
    int a,b;

    printf("Escolha os limites de um intervalo [a,b], sendo a<b: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("O primeiro número deve ser menor que o segundo. Escolha um novo intervalo:");
        scanf("%d %d", &a, &b);
    }

    printf("%d\n", soma(a,b));
    
    return 0;
}

int soma(int a, int b){
    int soma = 0;
    for(int i=a; i<=b; i++){
        if(primo(i)) soma += i;
    }

    return soma;
}

int primo(int n){
    
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;      
    }

    if(n!=1)
        return 1;
    else
        return 0;
}
