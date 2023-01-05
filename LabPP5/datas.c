/*
Arquivo: datas.c
Autora: Maria de Fátima
Lista de exercícios - Básico 4
*/

#include <stdio.h>

typedef struct dados{
    int dia, mes, ano;
}s_dados;


int main(void){
    printf("Informe uma data no formato D/M/YYYY sem zeros à esquerda: ");
    s_dados data;
    scanf("%02d/%02d/%d", &data.dia, &data.mes, &data.ano);

    const char strmes [13][4]={"","JAN", "FEV", "MAR", "ABR", "MAI", "JUN","JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};

    printf("%02d.%02d.%d ", data.dia, data.mes, data.ano);
    printf("%02d-%02d-%d ", data.mes, data.dia, data.ano);
    printf("%02d/%02d/%d ", data.dia, data.mes, data.ano%100);
    printf("%02d%s%d ", data.dia, strmes[data.mes], data.ano);

    
    return 0;
}

