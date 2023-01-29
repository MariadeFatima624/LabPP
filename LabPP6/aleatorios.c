/*
Arquivo: aleatorios.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int lli;

lli maximo(lli * vetor, int tam);
lli minimo(lli * vetor, int tam);
double calculaMedia (lli * vetor, int tam);


int main(void){
    int n;
    lli *a;
    
    printf("Defina a quantidade de elementos do vetor: ");
    scanf("%d%*c", &n);
    a = (lli *) malloc(n*sizeof(lli));

    srand(n);
    
    for(int i=0; i < n; i++){
        a[i]= rand()%n;
        
    }

    lli min = minimo(a,n);
    lli max = maximo(a,n); 
    double media = calculaMedia(a,n);

    printf("Mínimo: %d\t",min);
    printf("Máximo: %d\t",max);
    printf("Média: %lg\n",media);

    free(a);

    return 0;

}


lli minimo(lli *vetor, int tam){
    lli menor = vetor[0];
    
    for(lli i=1; i < tam; i++){
        if(vetor[i]<menor) menor=vetor[i];
    }

    return menor;

}


lli maximo(lli *vetor, int tam){
    lli maior = vetor[0];

    for(lli i=1; i < tam; i++){
        if(vetor[i]>maior) maior=vetor[i];
    }

    return maior;
}


double calculaMedia (lli * vetor, int tam){
    lli soma = 0;

    for(lli i=0; i < tam; i++){
        soma += vetor[i];
    }

    return ((double)soma)/tam;
}

