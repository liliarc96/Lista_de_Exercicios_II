/*
2 - Faça um programa que leia um número e retorne o fatorial deste número. Crie uma função que encontre
o resultado. Este programa deverá ser executado quando o usuário apertar 1 no menu da primeira atividade.
*/
#include <stdio.h>
//FUNÇÕES:
void menu(){
  printf("\n    ----MENU----\n\n1: Calcular Fatorial;\n\n2 - 9: Reexibir Menu;\n\n0: Terminar Execução;\n\n\nDigite uma opção do menu: ");
}
void fatorial(int f){
  int fatorial = f, contador;
  if(f > 0){
    for(contador = 1; f > contador ;contador++){
        fatorial = fatorial*(f-contador);
      }
    printf("\n!%d é igual a: %d\n", f, fatorial);
  }
  else{
    printf("ERRO.");
  }
}


int main(void) {
  int opcao, repeticao = 1;
  int numero;
  menu();
  scanf("%d", &opcao);
  while(repeticao == 1){
    switch(opcao){
      case 1:
        printf("\n----Calculadora de Fatorial----\n\nDigite um número: ");
        scanf("%d", &numero);
        fatorial(numero);
        menu();
        scanf("%d", &opcao);
        break;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        menu();
        scanf("%d", &opcao);
        break;
      case 0:
        printf("\nAdeus!");
        repeticao = 0;
        break;
      default:
        printf("Opção desejada é inexistente, tente novamente: ");
        menu();
        scanf("%d", &opcao);
        break;
    }
  } 
  return 0;
}
