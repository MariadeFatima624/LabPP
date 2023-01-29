/*
Arquivo: txtFibonacci.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Laboratório 7 - Único
*/

#include <stdio.h>
#include <stdlib.h>

typedef long long int lli;

lli fibonacci(int n);


int main(void){
    int n;
    lli *a;
    FILE *arq;
    
    printf("Defina a quantidade (0<=n<=94) de elementos do vetor: ");
    scanf("%d%*c", &n);

    a = (lli *) malloc(n*sizeof(lli));

    for(int i=0; i < n; i++){
        a[i]= fibonacci(i);
    }

    printf("O último número encontrado foi: %lld\n", a[n-1]);

    arq = fopen("fibonacci.txt", "a");

    if(arq==NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    for(int i=0; i < n; i++){
        fprintf(arq, "%lld\n", a[i]);
    }


    fclose(arq);
    free(a);

    return 0;
}


lli fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
