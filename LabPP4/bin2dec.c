/*
Arquivo: bin2dec.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Básico 4
*/

#include <stdio.h>
#include <math.h>

#define n 65

long long int getstr(char *str, int tam);
long long int converte(char *str,  int l);

int main(void){
    char num[n]= {'0','0','0','0','0'};
    printf("Digite um número binário de no máximo 64 bits:");
    long long int len = getstr( num, n);
    printf("%llu \n", converte(num, len));

    return 0;
}

long long int getstr(char *str, int tam){

    char c;
    int i;

  
    for(i=0; i< tam; i++){
        c=getchar();

        if(c== '0' || c=='1'){
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

long long int converte(char *str,  int l){

    long long int bin[n]={0,0,0,0,0};
    long long int soma=0;

   for(int i=0; i < l; i++){
        if(str[i]=='1'){
            bin[i] = 1;
        }else{
            bin[i] = 0;
        }
   }
 

    for(int i=0; i < l; i++){
        soma += (bin[l-1-i])*pow(2,i);
    } 
    
    return soma;  
}



