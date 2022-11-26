/*
Arquivo: maxHappyPrime.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Difícil 1
*/

#include <stdio.h>


int primo(int n);
int feliz(int n);
int quadrados(int n);
int resultado(int a);

int main(void){
    int a;

    printf("Escolha um número: ");
    scanf("%d", &a);

    printf("%d%s\n", resultado(a), resultado(a)==0? "*** = Nenhum número feliz foi encontrado.":"");
  
    return 0;
}

int primo(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }

    if(n!=1)
        return 1;
    else
        return 0;

}

int feliz(int n){
    if(quadrados(n)==4)
        return 0;
    else if(quadrados(n)==1)
         return 1;
    else{
        int proximo = (feliz(quadrados(n)));
        return proximo;
    }  
}

int quadrados(int n){
    int soma = 0, a=n;

    while(a!=0){
        soma += (a%10)*(a%10);
        a = a/10;
    }

    return soma;
}


int resultado(int a){
    int maior = 0;

    for(int i=2; i<=a; i++){
        if(primo(i)){
            if(feliz(i)){
                if(i>maior)
                    maior = i;
            }
        }

    }
    return maior;
}

    
