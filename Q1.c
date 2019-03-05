/*
1 - Crie um Menu.

O menu deverá ter opções quaisquer de 1 a 9, se o usuário digitar algum número entre 1 e 9, o programa deverá reexibir o menu.
Caso o usuário digitar qualquer outro número, com excessão do 0, o programa deve informar que a opção desejada é inexistente.
E por fim, caso o usuário digitar 0, o programa deve exibir mensagem de despedida e terminar sua execução.
*/

#include <stdio.h>
//Função Menu:
void menu(){
  printf("\n    ----MENU----\n\n1 - 9: Reexibir Menu;\n\n0: Terminar Execução;\n\n\nDigite uma opção do menu: ");
}

int main(void) {
  //Criação da variável que  recebe a opção do menu e a variável que mantém a repetição:
  int opcao, repeticao = 1;
  menu();
  scanf("%d", &opcao);
  /*
  Qualquer número >=1 e <=9 executa o case 9, exibindo a função menu e pedindo uma opção novamente.
  O case 0 muda o valor da variável repetição para 0, terminando o while.
  Números menores que 0 e maiore que 9 exibem a mensagem de erro e exibem a função menu e pedindo uma opção novamente.
  */
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
