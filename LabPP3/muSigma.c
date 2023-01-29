/*
Arquivo: muSigma.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 1
*/

#include <stdio.h>
#include <math.h>

float CalculaMedia(float *vetor, int tam);
float CalculaDesvPad(float *vetor, int tam, float media);

int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    float vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o elemento %d: ", i+1);
        scanf("%f", vetor+i);
    }

    float media = CalculaMedia(vetor, N);

    printf("media %g, desvio %g\n", media, CalculaDesvPad(vetor, N, media));
    
    return 0;
}

float CalculaMedia(float *vetor, int tam){
    float  soma = 0;

    for(int i=0; i<tam; i++){
        soma += vetor[i];
    }

    return soma/tam;
}

float CalculaDesvPad(float *vetor, int tam, float media){
    float soma = 0, desvio = 0;
    for(int i=0; i<tam; i++){
        float a = vetor[i]-media;
        soma += pow(vetor[i]-media,2) ;
    }

    return sqrt(soma/tam);
}