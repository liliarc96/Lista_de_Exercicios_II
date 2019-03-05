/*
4 - Faça um programa que leia n números e para um cada desses números, diga se é primo ou não. Crie uma função que faça esta avaliação. Para verificar se os números são primos, utilize a mesma função implementada na atividade anterior. Este programa deverá ser executado quando o usuário apertar 3 no menu da primeira atividade.
*/
#include <stdio.h>

/*----------------------------FUNÇÕES----------------------------*/

void menu(){
  printf("\n    ----MENU----\n\n");
  printf("1: Calcular Fatorial;\n\n");
  printf("2: Identificar Número Primo;\n\n");
  printf("3: Identificar Vários Números Primos;\n\n");
  printf("4 - 9: Reexibir Menu;\n\n");
  printf("0: Terminar Execução;\n\n\n");
  printf("Digite uma opção do menu: ");
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
void primo(int p){
  int cont = 2;
  int divisor;
  if(p >= 0){
    if(p == 1 || (p%2 == 0 && p != 2)){
      printf("\n%d não é primo.\n", p);
    }else{
      for(divisor = p-1 ;divisor > 2 && cont == 2;divisor--){
        if(p%divisor == 0){
          cont++;
        }
      }
      if(cont>2){
        printf("\n%d não é primo.\n",p);
      }else{
        printf("\n%d é primo.\n",p);
      }
    }
  }else{
    printf("\nNúmero negativo.\n");
  }
}

/*----------------------------MAIN----------------------------*/

int main(void) {
  int opcao, repeticao = 1;
  int numero = 1;
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
        printf("\n----Identificador de Números Primos----\n\nDigite um número: ");
        scanf("%d", &numero);
        primo(numero);
        menu();
        scanf("%d", &opcao);
        break;
      case 3:
        printf("\n----Identificador de Vários Números Primos----\n\n");
        while(numero!=0){
          printf("\nDigite um número (0 para sair): ");
          scanf("%d", &numero);
          primo(numero);
        }
        printf("\nEncerrando...\n");
        menu();
        scanf("%d", &opcao);
        break;
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
