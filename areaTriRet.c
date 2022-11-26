/*
Arquivo: areaTriRet.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 3
*/

#include <stdio.h>
#include <math.h>

float dist(float x1,float x2, float y1, float y2);

int main(void){
    float xA, yA, xB, yB, xC, yC;

    printf("Escolha a primeira coordenada: ");
    scanf("%f %f", &xA, &yA);
    printf("Escolha a segunda coordenada: ");
    scanf("%f %f", &xB, &yB);

    xC = xB;
    yC= yA;
    printf("Terceira coordenada: (%g, %g)\n", xC, yC);

    float base = dist(xA,xC, yA, yC), altura = dist(xB,xC, yB, yC);

    float area = (base*altura)/2;
    printf("%g\n", area);

    return 0;
}

float dist(float x1,float x2, float y1, float y2){
    return sqrt(pow((x1-x2),2)+ pow((y1-y2), 2));
}

