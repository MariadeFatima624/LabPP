/*
Arquivo: imc.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 4
*/
#include <stdio.h>

int main(void){
    float peso;
    float altura;

    printf("Digite o peso e a altura: ");
    scanf("%f %f", &peso, &altura);

    float IMC = peso/(altura*altura);

    printf("O IMC é %.2f ", IMC);

    if(IMC<16){
        printf("(Perigo de vida)");
    };

    if(IMC>16 && IMC<17){
        printf("(Muito abaixo do peso)");
    };

    if(IMC>17 && IMC<18.5){
        printf("(Abaixo do peso)");
    };

     if(IMC> 18.5 && IMC<25){
        printf("(Peso normal)");
    };
     if(IMC>25 && IMC<30){
        printf("(Acima do peso)");
    };
     if(IMC>30 && IMC<35){
        printf("(Obesidade grau I)");
    };
    if(IMC>35 && IMC<40){
        printf("(Obesidade grau II)");
    };
    if(IMC>40){
        printf("(Obesidade grau III)");
    };

    return 0;
    }
