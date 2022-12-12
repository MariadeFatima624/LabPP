/*
Arquivo: reverteString.c
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include <stdio.h>

#define n 1024

long long int getstr(char *str, int tam);
void reverte(char *str,  int l);
void upperPrint(char *str,  int l);

int main(void){
    char mensagem[n]= {'x','x','x','x','x'};
    printf("Escreva uma mensagem de uma linha.\nIMPORTANTE: Nao use acentos nem cedilha, por favor.\n");
    long long int len = getstr( mensagem, n);
    reverte(mensagem, len);
    upperPrint(mensagem, len);

    return 0;
}

long long int getstr(char *str, int tam){
    char c;
    int i;

    for(i=0; i< tam; i++){
        c=getchar();

        if(c!='\n'){
            str[i]=c; 
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

    long long int l = 0;
    while(str[l]) l++;

    return l;

}

void reverte(char *str,  int l){
    char c;
   
        for(int i=0; i < l/2; i++){
        c = str[i];
        str[i] = str[l-1-i];
        str[l-1-i] = c;
        }   
}

void upperPrint(char *str,  int l){
    for(int i=0; i < l; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= ('a'-'A');
        }
        printf("%c", str[i]);
    }
    printf("\n");
}

