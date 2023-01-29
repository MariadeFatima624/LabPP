/*
Arquivo: raizes2grau.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Médio 1
*/

#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float * x1, float * x2);


int main(void){
    float a, b, c, x1, x2;
    int nRaizes;

    printf("Digite os coeficientes a, b e c da função no formato a b c: ");
    scanf("%f %f %f%*c", &a, &b, &c);

    if(a==0){
        printf("O valor de a deve ser diferente de 0.\nDigite um novo valor de a: ");
        scanf("%f%*c", &a);
    }
    nRaizes = raizes(a,b,c,&x1, &x2);
    printf("N. raizes distintas = %d\t\t",nRaizes);

    if(nRaizes == 2) printf("x1 = %g\t x2 = %g", x1, x2);
    else if (nRaizes == 1)printf("x1 = x2 = %g", x1);

    printf("\n");

    return 0;

}

int raizes(float a, float b, float c, float *x1, float *x2){
    float delta = b*b-(4*a*c);

    if(delta >= 0){
        *x1= ((-b)-sqrt(delta))/(2*a);
        if(delta > 0){
            *x2= ((-b)+sqrt(delta))/(2*a);
            return 2;
        } else{
            *x2 = *x1;
            return 1;
        } 
    }

    return 0;
}


