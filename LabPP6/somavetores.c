/*
Arquivo: somavetores.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Basico 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int soma(int *impares, int tam1, int *multiplos, int tam2, int *r);


int main(void){
    int n, m;
    int *v1, *v2, *res;
    
    printf("Defina a quantidade de elementos do primeiro vetor: ");
    scanf("%d%*c", &n);
    printf("Defina a quantidade de elementos do segundo vetor: ");
    scanf("%d%*c", &m);
    v1 = (int *) malloc(n*sizeof(int));
    v2 = (int *) malloc(m*sizeof(int));
    res = (int *) malloc(m*sizeof(int));

    if(soma(v1, n, v2, m, res)){
        for(int i=0; i<m; i++){
        printf("%s%d", i==0? "":", ", res[i] );
        }
        printf("\n");
    } else
        printf("Os vetores não podem ser somados, pois possuem tamanhos diferentes.\n");

    free(v1);
    free(v2);
    free(res);

    return 0;

}

int soma(int *impares, int tam1, int *multiplos, int tam2, int *r){
    if(tam1 != tam2) return false;

    int a = tam1;

    for(int i=0; i < a; i++){
        impares[i]= 1+i*2;
    }

    for(int i=0; i < a; i++){
        multiplos[i]= i*4;
    }

    for(int i=0; i < a; i++){
        r[i]=  impares[i]+multiplos[i];
    }

    return true;
}
