/*
Arquivo: divisores.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 4
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Escolha um número inteiro positivo: ");
    scanf("%d", &n);

    int a=0;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%s %d", a==0? "":",", i);
            if(a==0)a=1;
        }
    }
    return 0;
}

