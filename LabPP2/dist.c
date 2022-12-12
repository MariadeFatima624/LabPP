/*
Arquivo: dist.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 1
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float xA, yA, xB, yB;
    printf("Escolha a primeira coordenada: ");
    scanf("%f %f", &xA, &yA);
    printf("Escolha a segunda coordenada: ");
    scanf("%f %f", &xB, &yB);

    float d = sqrt(pow((xA-xB),2)+ pow((yA-yB), 2));

    printf("%g\n", d);
    return 0;
}

