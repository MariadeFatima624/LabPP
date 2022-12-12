/*
Arquivo: contaCaracteres.c
Autora: Maria de Fátima
Lista de exercícios - Médio 2
*/

#include <stdio.h>

#define n 1024

long long int getstr(char *str, int tam);
void contaElementos(char *str,  int tam);

int main(void){
    char mensagem[n]= {'x','x','x','x','x'};
    printf("Escreva uma frase.\nIMPORTANTE: Nao use acentos nem cedilha, por favor.\n");
    long long int len = getstr( mensagem, n);
    contaElementos(mensagem,  len);
    
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

void contaElementos(char *str,  int tam){
    int letras=0, digitos=0, outros=0;

    for(int i=0; i < tam; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            letras ++;
        } 
        else if(str[i]>='0' && str[i]<='9'){
            digitos ++;
        } 
        else{
            outros ++;
        } 
    } 

    printf("letras: %d dígitos: %d outros: %d\n", letras, digitos, outros);     
}







