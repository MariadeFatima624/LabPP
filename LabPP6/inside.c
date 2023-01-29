/*
Arquivo: inside.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Basico 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 1024

typedef long long int lli;

void getstr(char * str, lli nchar);
int contem(char * s1, char * s2);


int main(void){
    char s1[n], s2[n];
    printf("Digite a string 1: ");
    getstr(s1, n);
    printf("Digite a string 2: ");
    getstr(s2, n);

    int indice = contem(s1, s2);

    if (indice!=-1){
        for(int i=0; i < strlen(s2); i++){
            if(i==indice) printf("*%c",s2[i]);
            else if (i==indice+strlen(s1)-1) printf("%c*",s2[i]);
            else printf("%c",s2[i]);  
        }
        printf("\n");
    }else
        printf("A primeira string não está contida na segunda.\n");
    return EXIT_SUCCESS;
}


void getstr(char * str, lli tam) {
    char c;
    lli i;

    for(i = 0; i < tam && (c = getchar()) != '\n'; i++)
        str[i] = c;
        
    str[(i >= tam) ? tam - 1 : i] = '\0';

    if(i >= tam) 
        while ((c = getchar()) != '\n' && c != EOF);
}


int contem(char * s1, char * s2) {
    int i, j;

    for(i = 0; i < strlen(s2); i++) {
        if(s1[0] == s2[i]) {
            for(j = 1; j < strlen(s1); j++) {
                if(i+j >= strlen(s2)) return -1;
                if(s1[j] != s2[i+j]) break;
            }
            if(j == strlen(s1)) return i;
        }
    }

    return -1;
}

