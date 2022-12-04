/*
Arquivo: diferencas.c
Data de criação: 1 de dezembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Difícil 1
*/

#include <stdio.h>

double* calculaDiferenca(double *vetorA, int tam, double *vetorB);
double buscaMaximo(double *vetorB, int tam);
double buscaMinimo(double *vetorB, int tam);

int main(void){
    int N;
    printf("Defina a quantidade de elementos: ");
    scanf("%d", &N);

    double vetorA[N];
    for(int i=0; i<N; i++){
        printf("Escolha o elemento %d: ", i+1);
        scanf("%lf", vetorA+i);
    }

    double vetorB[N-1];
    calculaDiferenca(vetorA, N, vetorB);

    double maximo = buscaMaximo(vetorB, N-1);
    double minimo = buscaMinimo(vetorB, N-1);

    for(int i=0, a=0; i<N-1; i++){
            printf("%s%g", a==0? "":", ", vetorB[i]);
            if(a==0)
                a = 1;
        }

    printf("     min: %g     max: %g\n", minimo, maximo);
    

    return 0;
}

double* calculaDiferenca(double *vetorA, int tam, double *vetorB){
    for(int i=1; i<tam; i++){
        vetorB[i-1] = vetorA[i]-vetorA[i-1];   
    }

    return vetorB;
}

double buscaMaximo(double *vetorB, int tam){
    double max = vetorB[0];
    for(int i=1; i<tam; i++){
        if(vetorB[i] > max)
            max = vetorB[i];
    }

    return max;
}

double buscaMinimo(double *vetorB, int tam){
    double min = vetorB[0];
    for(int i=1; i<tam; i++){
        if(vetorB[i] < min)
            min = vetorB[i];
    }

    return min;
}

