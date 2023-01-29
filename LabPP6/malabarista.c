/*
Arquivo: malabarista.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Basico 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int lli;

lli malabarista(int a_i);
lli maximo(lli * vetor, int tam);
lli minimo(lli * vetor, int tam);
double calculaMedia (lli * vetor, int tam);


int main(void){
    int n;
    lli *a;
    
    printf("Defina a quantidade de números a serem analisados: ");
    scanf("%d%*c", &n);
    a = (lli *) malloc(n*sizeof(lli));
    printf("Escolha o primeiro número: ");
    scanf("%lld%*c", &a[0]);
    
    for(int i=1; i < n; i++){
        a[i]= malabarista(a[i-1]);
    }

    lli max = maximo(a,n);
    lli min = minimo(a,n);
    double media = calculaMedia(a,n);

    printf("Mínimo: %lld;\t",min);
    printf("Máximo: %lld;\t",max);
    printf("Média: %lg\n",media);

    free(a);

    return 0;

}

lli malabarista(int a_i){
    return (lli)floor(sqrt((a_i%2==0)? a_i:pow(a_i,3)));
}

lli maximo(lli * vetor, int tam){
    lli maior = vetor[0];

    for(int i=1; i < tam; i++){
        if(vetor[i]>maior) maior=vetor[i];
    }

    return maior;
}

lli minimo(lli * vetor, int tam){
    lli menor= vetor[0];
    
    for(int i=1; i < tam; i++){
        if(vetor[i]<menor) menor=vetor[i];
    }

    return menor;

}


double calculaMedia (lli * vetor, int tam){
    lli soma = 0;

    for(int i=0; i < tam; i++){
        soma += vetor[i];
    }

    return ((double)soma)/tam;
}

