/*
Arquivo: quaisDiv.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include <stdio.h>

void imprimeDiv(int * vetor, int tam, int ref);

int main(void){
    int N, R;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    int vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o elemento %d: ", i+1);
        scanf("%d", vetor+i);
    }

    printf("Escolha um número de referência: ");
    scanf("%d", &R);
    
    imprimeDiv(vetor, N, R);
    
    return 0;
}

void imprimeDiv(int * vetor, int tam, int ref){
    for(int i=0; i<tam; i++){
        printf("%d%s ", vetor[i], ref%vetor[i]==0? "#":"" );
    }
    
    printf("\n");
}