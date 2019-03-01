/*
2 - Faça um programa que leia um número e retorne o fatorial deste número. Crie uma função que encontre
o resultado. Este programa deverá ser executado quando o usuário apertar 1 no menu da primeira atividade.
*/
#include <stdio.h>

int main(void) {
  int numero, contador, fatorial;
  
  printf("\nDigite um numero inteiro maior que zero: ");
  scanf("%d", &numero);
  
  fatorial = numero;

  if(numero > 0){
    for(contador = 1; numero > contador ;contador++){
        fatorial = fatorial*(numero-contador);
      }
    printf("\n!%d é igual a: %d", numero, fatorial);
  }
  else{
    printf("ERRO.");
  }
  
  return 0;
}
