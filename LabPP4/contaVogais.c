/*
Arquivo: contaVogais.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 1
*/

#include <stdio.h>

#define n 1024

void getstr(char *str, int tam);
long long int vogais(char *str,  int tam);

int main(void){
    char palavra[n]= {'x','x','x','x','x'};
    printf("Escreva uma palavra.\nIMPORTANTE: Nao use acentos nem cedilha, por favor.\n");
    getstr( palavra, n);
    printf("A palavra digitada tem %d vogal(is).\n", vogais(palavra, n));

    return 0;
}

void getstr(char *str, int tam){
    char c;
    int i;

    for(i=0; i< tam; i++){
        c=getchar();

        if(c!='\n'){
            if(c>='a' && c<='z'){
                //Transformação de minúscula para maiúscula
                str[i] = c - ('a'-'A');
            }else{
                str[i]=c;
            }
        }else{
            str[i] ='\0';
            break;
        }
    }

    if(i==tam){
        str[i-1]='\0';
        //Limpeza do buffer do teclado
        while((c=getchar()) != '\n' && c!= EOF);
    }

}

long long int vogais(char *str,  int tam){
    long long int v=0;

    
        for(int i=0; i < tam; i++){
            if(str[i] =='A'|| str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'){
                v ++;
            }   
        } 
       

return v;
}