/*
Arquivo: cosTaylor.c
Autora: Maria de Fátima
Lista de exercícios - Difícil
*/

#include <stdio.h>
#include <math.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial(int numero);

int main(void){
  int n;
  double x;
  double resultado = 0.0;

  printf("Digite um número: ");
  scanf("%d", &n);

  printf("Digite um fator para pi: ");
  scanf("%lf", &x);
  x *= M_PI;

  for(int i=0; i<=n; i++){
    resultado += pow(-1, i)*(pow(x, 2*i)/fatorial(2*i));
  };
  
  printf("%.5lf", resultado);

  return 0;
}

int fatorial(int numero){
    long fatorial = 1;
    
    if(numero >1){
        for(int i=1; i<= numero; i++){
            fatorial = fatorial * i;
        }
    }
    return fatorial;
  }