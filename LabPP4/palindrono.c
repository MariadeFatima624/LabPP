/*
Arquivo: palindromo.c
Autora: Maria de Fátima
Lista de exercícios - Médio 1
*/

#include <stdio.h>

#define n 1024

long long int getstr(char *str, int tam);
int reverte(char *str,char *msg,  int l);


int main(void){
    char mensagem[n]= {'x','x','x','x','x'}, msgRevertida[n]= {'x','x','x','x','x'};
    printf("Escreva uma mensagem de uma linha.\nIMPORTANTE: Nao use acentos nem cedilha, por favor.\n");
    long long int len = getstr( mensagem, n);
    printf("Palindrono: ");

    if(reverte(mensagem, msgRevertida, len)){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

    return 0;
}

long long int getstr(char *str, int tam){
    char c;
    int i;

    for(i=0; i< tam; i++){
        c=getchar();

        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            if(c>='a' && c<='z'){
                //Transformação de minúscula para maiúscula
                str[i] = c - ('a'-'A');
            }else{
                str[i]=c;
            }
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

int reverte(char *str, char *msg,  int l){
   
    for(int i=0; i < l; i++){
        msg[i]=str[l-1-i];
    }   

    for(int i=0; i < l; i++){
        if (str[i] != msg[i]){
            return 0;
        }
    }
    return 1;
}



