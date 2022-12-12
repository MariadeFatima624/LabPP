/*
Arquivo: contaPalavras.c
Autora: Maria de Fátima
Lista de exercícios - Difícil 1
*/

#include <stdio.h>

#define n 1024

long long int getstr(char *str, int tam);
int contaPalavras(char *str, int l);


int main(void){
    char mensagem[n]= {'x','x','x','x','x'}, msgRevertida[n]= {'x','x','x','x','x'};
    printf("Escreva uma mensagem de uma linha: \n");

    printf("%d\n", contaPalavras(mensagem, getstr( mensagem, n)));

    return 0;
}

long long int getstr(char *str, int tam){
    char c;
    int i;

    for(i=0; i< tam; i++){
        c=getchar();

        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (str[i]>='0' && str[i]<='9') || c == ' '){
            str[i]=c;
        }else if(c =='\n'){
            str[i] ='\0';
            break;
        }else{
            i--;
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

int contaPalavras(char *str, int l){
    int palavras = 0, i=0;

    for(i=0; i < l; i++){
        if(str[i]!=' '){
            break;
        }
    }

    if(l && i<l){
        palavras++;
        for(int i=0; i < l; i++){
            if(str[i]==' ')
                palavras++;
        }   
    }

    return palavras;
}


