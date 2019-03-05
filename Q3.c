/*
3 - Faça um programa que leia um número e diga se esse número é primo ou não. Crie uma função que faça esta avaliação. Este programa deverá ser executado quando o usuário apertar 2 no menu da primeira atividade.
*/

#include <stdio.h>

/*----------------------------FUNÇÕES----------------------------*/

void menu(){
  printf("\n    ----MENU----\n\n");
  printf("1: Calcular Fatorial;\n\n");
  printf("2: Identificar Número Primo;\n\n");
  printf("3 - 9: Reexibir Menu;\n\n");
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
  int cont = 2; //contagem de números que dividem o **p**, já conta que é divisível por 1 e por ele mesmo
  int divisor; //número usado para testar **p**
  /*
  NÃO É PRIMO SE:
  Se o número for igual à 1 [numero == 1] **ou**
  For par [numero%2 == 0] **e** diferente de 2 [numero != 2]

  SENÃO:
  Entra nessa categoria se for diferente de 1, não for par ou ser 2.

  Número é dividido inicialmente por um número imediatamente inferior a ele [divisor = numero-1]
  e o decréscimo [divisor--] continua até:
  1.Se tiver mais de 2 divisores (valor inicial da variável cont, divisivel por 1 e ele mesmo) [cont == 2]
  2.Até 3 (para não repetir a divisão por 2) [divisor > 2]
  */
  if(p == 1 || (p%2 == 0 && p != 2)){
    printf("\n%d não é primo.\n", p);
  }
  else{
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
}

/*----------------------------MAIN----------------------------*/

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
        printf("\n----Identificador de Números Primos----\n\nDigite um número: ");
        scanf("%d", &numero);
        primo(numero);
        menu();
        scanf("%d", &opcao);
        break;
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
