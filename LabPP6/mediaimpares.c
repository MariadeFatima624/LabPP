/*
Arquivo: mediaimpares.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Basico 2
*/

#include <stdio.h>
#include <stdlib.h>

double calculaMedia (int * vetor, int tam);


int main(void){
    int n, s;
    
    printf("Defina a quantidade de números a serem analisados: ");
    scanf("%d%*c", &n);
    printf("Escolha o primeiro número: ");
    scanf("%d%*c", &s);
    if(s%2!=0) --s;

    int *a = (int *) malloc(n*sizeof(int));

    a[0]= ++s;
    for(int i=1; i < n; i++){
        a[i]= a[i-1]+2;
    }

    double media = calculaMedia(a,n);

    printf("O penúltimo elemento é: %d;\t",a[n-2]);
    printf("a média é: %lg\n",media);

    free(a);

    return 0;

}

double calculaMedia (int * vetor, int tam){
    double soma = 0;

    for(int i=0; i < tam; i++){
        soma += vetor[i];
    }

    return soma/(tam);
}

