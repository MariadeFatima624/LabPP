/*
Arquivo: minMax.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 1
*/

#include <stdio.h>


void imprimeMinMax(int * vetor, int tam);

int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    int vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o elemento %d: ", i+1);
        scanf("%d", vetor+i);
    }

    imprimeMinMax(vetor, N);

    return 0;
}

void imprimeMinMax(int * vetor, int tam){
    int min=vetor[0], max=vetor[0];
    for(int i=0; i<tam; i++){
        if(vetor[i]<min)
        min=vetor[i];
        if(vetor[i]>max)
        max=vetor[i];
    }
    for(int i=0; i<tam; i++){
        printf("%d%s%s ", vetor[i], vetor[i]==min? "<":"", vetor[i]==max? ">":"" );
    }

    printf("\n");
    
}