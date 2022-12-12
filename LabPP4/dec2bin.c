/*
Arquivo: dec2bin.c
Autora: Maria de Fátima
Lista de exercícios - Básico 3
*/

#include <stdio.h>
void bin(unsigned long long int b);

int main(void){
    unsigned long long int a;

    printf("Digite um número decimal de no máximo 64 bits: ");
    scanf("%llu", &a);
    bin(a);

    return 0;
}

void bin(unsigned long long int b){

    unsigned long long int v[64]={0,0,0,0,0},tam[64]={0,0,0,0,0}, i, bi=0; 
    
    for(int a=0; b>0; a++){
        for(i=0; (1<<i)<=b; i++){
            bi = 1<<i;
        }
    tam[a] = i;
    b -= bi;
    }

    int t=1,m=0;

    if(tam[0]!=0){
        v[0]=1;
    }

    while(t <tam[0]-1){
        v[tam[0]-tam[t]] = 1 ;
        t++;
    }

    while(m <tam[0]){
        printf("%llu", v[m]);
        m++;
    }

    printf("\n");
}
