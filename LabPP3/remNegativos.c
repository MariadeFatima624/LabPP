/*
Arquivo: remNegativos.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 2
*/

#include <stdio.h>

int buscaNegativos(int *vetor, int tam);
int* tiraNegativos(int *vetor, int N, int *Resposta, int tam);


int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    int vetor[N];
    for(int i=0; i<N; i++){
        printf("Escolha o elemento %d: ", i+1);
        scanf("%d", vetor+i);
    }

    int tamResposta = buscaNegativos(vetor, N);
    int Resposta[tamResposta];
    tiraNegativos(vetor, N, Resposta, tamResposta);

    if(tamResposta>0){
        int a=0;
        for(int i=0; i<tamResposta; i++){
            printf("%s%d", a==0? "":", ", Resposta[i]);
            if(a==0)
                a = 1;
        }
        printf("\n");
    }
         
    else
        printf("vazio\n");

    return 0;
}

int buscaNegativos(int *vetor, int tam){
    int contaNegativos = 0;

    for(int i=0; i<tam; i++){
        if(vetor[i]<0)
            contaNegativos += 1;
    }

    return tam - contaNegativos;
}

int* tiraNegativos(int *vetor, int N, int *Resposta, int tam){

    for(int i=0, a=0; i<N; i++){
        if(vetor[i]>=0){
            Resposta[a] = vetor[i];
            a +=1;
        }      
    }
    
    return Resposta;
}