/*
Arquivo: somaSeqHailst.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Médio 2
*/

#include <stdio.h>


int main(void){
    int x;
    printf("Esclha um número inteiro positivo: ");
    scanf("%d", &x);

    int soma = x;

    while(x>1){
        if(x%2 == 0)
            x = x/2;
        else
            x = 3*x+1;
        soma += x;
    }
    
    printf("%d\n", soma);
    
    return 0;
}
