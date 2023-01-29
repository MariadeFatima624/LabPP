/*
Arquivo: golomb_rec.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Difícil 1 - Versão com recursão
*/

#include <stdio.h>
#include <stdlib.h>

typedef long long int lli;

lli golomb(lli * vetor, int i);
double calculaMedia (lli * vetor, int inicio, int tam);


int main(void){
    int a, b,n;
    lli *v;
    
    printf("Defina o primeiro índice do intervalo a ser analisado: ");
    scanf("%d", &a);
    printf("Defina o último índice do intervalo a ser analisado: ");
    scanf("%d", &b);

    if(b < a){ 
        int aux = a; 
        a = b; 
        b = aux; 
    }

    n=b+1;

    v = (lli *) malloc((n)*sizeof(lli));

    golomb(v, n);

    double media = calculaMedia(v,a,n);

    printf("Primeiro: %lld;\t",v[a]);
    printf("Último: %lld;\t",v[b]);
    printf("Média: %lg\n",media);

    free(v);

    return 0;

}

lli golomb(lli * vetor, int i){
    if(i==0) return vetor[i]= 1;

    return vetor[i]= 1+golomb(vetor,i-golomb(vetor,golomb(vetor,i-1)-1));
}


double calculaMedia (lli * vetor, int inicio, int tam){
    lli soma = 0;

    for(int i=inicio; i < tam; i++){
        soma += vetor[i];
    }

    return ((double)soma)/(tam-inicio);
}

