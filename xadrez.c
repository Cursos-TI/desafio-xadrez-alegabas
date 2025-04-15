#include <stdio.h>

int main() {

    
 // Mover a Torre 5 casas para a direita (usando "for")

 printf("Movimento da Torre:\n");
 for (int i = 0; i < 5; i++){
     printf("Torre: Cima\n"); // Imprime a direção do movimento da torre
 }
 

 // Mover o bispo em 5 casas na diagonal para cima e à direita (usando "while")

 printf("\nMovimento do Bispo:\n");
 int i = 0;
 while (i < 5) {
     printf("Bispo: Cima, Direita\n"); // Imprime a direção do movimento do bispo
     i++;
 }

 
 // Mover a rainha 8 casas para a esquerda (usando "do-while")

 printf("\nMovimento da Rainha:\n");
 i = 0;
 do {
     printf("Rainha: Esquerda\n"); // Imprime a direção do movimento da rainha
     i++;
 } while (i < 8);


 // Mover o cavalo duas casas para baixo e uma à esquerda (usando loops aninhados)

int movimentoCompleto = 1; // Flag para controlar o movimento em "L"
    
printf("\nMovimento do cavalo:\n"); // Imprime a direção do movimento do cavalo
while (movimentoCompleto--) // Movimento do cavalo usando "while"
    {
      for (int i = 0; i < 2; i++) { // Movimento do cavalo usando "for"
          printf("Cavalo: Baixo\n"); // Imprime "Baixo" duas vezes
      }
      printf("Cavalo: Esquerda\n"); // Imprime "Esquerda" uma vez
    }  

    return 0;
}
