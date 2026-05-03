#include <stdio.h>

#define LINHA 10
#define TABULEIRO 10
int opcao;

int main (void){
  do
  {
      int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   printf("     ===    menu   ===\n");
   printf("1. Encontrar um valor de matriz\n");
   printf("2. Tabuleiro 10x10 \n");
   printf("3. Formas geometricas \n");
   printf("0. sair \n");
   printf("Digite: \n");
   scanf("%d", &opcao);

   switch(opcao) {
       case 1:
          printf("matriz\n");
          break;
       case 2:
          printf("10x10\n");
          break;  
       case 3:
          printf("formas\n");
          break;  
       default:
          printf("Opcao invalida!!!!\n");
          break;    
         
    }
  } while (opcao != 0);
          
    printf("ate mais....\n");
     
    return 0;
}