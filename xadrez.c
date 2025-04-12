#include <stdio.h>

int main() {

    
 // Mover a Torre 5 casas para a direita
 printf("Movimento da Torre:\n");
 for (int i = 0; i < 5; i++){
     printf("Torre: Cima\n"); // Imprime a direção do movimento da torre
 }
 
 // Mover o bispo em 5 casas na diagonal para cima e à direita
 printf("\nMovimento do Bispo:\n");
 int i = 0;
 while (i < 5) {
     printf("Bispo: Cima, Direita\n"); // Imprime a direção do movimento do bispo
     i++;
 }

 // Mover a rainha 8 casas para a esquerda
 printf("\nMovimento da Rainha:\n");
 i = 0;
 do {
     printf("Rainha: Esquerda\n"); // Imprime a direção do movimento da rainha
     i++;
 } while (i < 8);

    return 0;
}
