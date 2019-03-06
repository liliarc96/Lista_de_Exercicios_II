/*
7 - Elabore um programa em linguagem C que receba um ano (numérico inteiro) e informe se o ano é bissexto ou não (anos bissextos são múltiplos de 4, portanto, se a divisão do ano por 4 gerar resto igual a zero, o ano é bissexto - use o operador %). Este programa deverá ser executado quando o usuário apertar 6 no menu da primeira atividade.
*/
#include <stdio.h>
#include <math.h>

/*----------------------------FUNÇÕES----------------------------*/

void menu(){
  printf("\n    ----MENU----\n\n");
  printf("1: Calcular Fatorial;\n\n");
  printf("2: Identificar Número Primo;\n\n");
  printf("3: Identificar Vários Números Primos;\n\n");
  printf("4: Calcular Potência;\n\n");
  printf("5: Calcular Raiz;\n\n");
  printf("6: Indentificar Ano Bissexto;\n\n");
  printf("7 - 9: Reexibir Menu;\n\n");
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
void potencia(float b,int e){
  float resultado;
  resultado = pow(b,e);
  printf("\n%.2f elevado à %d é igual a %.2e.\n", b, e, resultado);
}
void raiz(float r,int i){
  float resultado;
  resultado = pow(r, 1.0/i);
  printf("\nA raiz %da de %.2f é igual a %.2e.\n", i, r, resultado);
}
void bissexto(int a){
  if(a%4 == 0){
    printf("\nO ano %d é múltiplo de 4, por isso é um ano bissexto.\n",a);
  }else{
    printf("\nO ano %d não é múltiplo de 4, por isso não é um ano bissexto.\n",a);
  }
}
/*----------------------------MAIN----------------------------*/

int main(void) {
  int opcao, repeticao = 1;
  int numero = 1;
  float base, radicando;
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
        printf("\n----Calculadora de Potência----\n\nDigite uma base: ");
        scanf("%f", &base);
        printf("Digite um expoente: ");
        scanf("%d", &numero);
        potencia(base,numero);
        menu();
        scanf("%d", &opcao);
        break;
      case 5:
        printf("\n----Calculadora de Raiz----\n\nDigite um radicando: ");
        scanf("%f", &radicando);
        printf("Digite um índice: ");
        scanf("%d", &numero);
        raiz(radicando,numero);
        menu();
        scanf("%d", &opcao);
        break;
      case 6:
        printf("\n----Identificador de Anos Bissextos----\n\nDigite um número: ");
        scanf("%d", &numero);
        bissexto(numero);
        menu();
        scanf("%d", &opcao);
        break;
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
