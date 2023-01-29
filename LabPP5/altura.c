/*
Arquivo: altura.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 3
*/

#include <stdio.h>

typedef struct dados{
    int metros, centimetros;
}s_dados;


int cm(int n);

int main(void){
    printf("Informe uma altura em metros no formato a.b: ");
    s_dados altura;
    scanf("%d.%d", &altura.metros, &altura.centimetros);
    altura.centimetros = cm(altura.centimetros);
    printf("Altura %dm%d\n", altura.metros, altura.centimetros);
    return 0;
}

int cm(int n){
    if(n<10) return n*10;
    if(n>99) return cm(n/10);
    return n;
}