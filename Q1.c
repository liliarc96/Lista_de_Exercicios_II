/*
1 - Crie um Menu.

O menu deverá ter opções quaisquer de 1 a 9, se o usuário digitar algum número entre 1 e 9, o programa deverá reexibir o menu.
Caso o usuário digitar qualquer outro número, com excessão do 0, o programa deve informar que a opção desejada é inexistente.
E por fim, caso o usuário digitar 0, o programa deve exibir mensagem de despedida e terminar sua execução.
*/

#include <stdio.h>

void menu(){
  printf("    ----MENU----\n\n1 - 9: Reexibir Menu;\n\n0: Terminar Execução;\n\n\nDigite uma opção do menu: ");
}

int main(void) {
  int opcao, repeticao = 1;
  menu();
  scanf("%d", &opcao);
  while(repeticao == 1){
    switch(opcao){
      case 1:
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
