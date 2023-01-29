/*
Arquivo: cadastro.c
Autora: Maria de Fátima Penha dos Santos
Número de matrícula: 12121EEL002
Lista de exercícios - Difícil 1
*/

#include <stdio.h>

#define x 1024

typedef struct{
    char nome[x];
    struct {
        int dia, mes, ano;
    }aniversario;
    struct {
        int metros, centimetros;
    }altura;
    float peso;
}pessoa;

pessoa dados();
void getstr(char *str, int tam);
int cm(int n);

int main(void){
    int n = 0;
    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &n);

    pessoa cadastros[n];

    for(int i=0; i<n; i++){
        printf("Cadastro da pessoa %d:\n", i+1);
        cadastros[i] = dados();
        printf("\n");
    }

    for(int i=0; i<n; i++){
        const char strmes [13][4]={"","JAN", "FEV", "MAR", "ABR", "MAI", "JUN","JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};

        printf("%s; ", cadastros[i].nome);
        printf("%02d%s%d; ", cadastros[i].aniversario.dia, strmes[cadastros[i].aniversario.mes], cadastros[i].aniversario.ano);
        printf("%dm%d; ", cadastros[i].altura.metros, cadastros[i].altura.centimetros);
        printf("%.1fKg", cadastros[i].peso);
        printf("\n");
    }


    return 0;
}

pessoa dados(void){
    pessoa pessoa_i;
    printf("Nome: ");
    getstr(pessoa_i.nome, x);
    printf("Data de nascimento: ");
    scanf("%02d/%02d/%d", &pessoa_i.aniversario.dia, &pessoa_i.aniversario.mes, &pessoa_i.aniversario.ano);
    printf("Altura: ");
    scanf("%d.%d", &pessoa_i.altura.metros, &pessoa_i.altura.centimetros);
    pessoa_i.altura.centimetros = cm(pessoa_i.altura.centimetros);
    printf("Peso: ");
    scanf("%f", &pessoa_i.peso);

    return pessoa_i;
}

void getstr(char *str, int tam){
    char c={'a'};
    int i;

    for(i=0; i< tam; i++){
        c=getchar();
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (str[i]>='0' && str[i]<='9') || c == ' '){
            str[i]=c;
        }else if(c =='\n' & i!=0){
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

   
}

int cm(int n){
    if(n<10) return n*10;
    if(n>99) return cm(n/10);
    return n;
}


