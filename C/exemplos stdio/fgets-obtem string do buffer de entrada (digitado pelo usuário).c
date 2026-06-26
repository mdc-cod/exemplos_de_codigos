#include <stdio.h>
#include <string.h>


int main(){

 // matriz de caracteres com 20 de capacidade 
  char veiculo[20]; // onde a strig obtida será armazenada

  printf("tipo de veiculo:\n"); 

  // matriz, capacidade da matriz, buffer de entrada (local dos valores digitados)
  fgets(veiculo, 20, stdin); // obtém a strig digitada pelo usuario

  printf("tipo do veiculo: %s", veiculo); // exibe a strig obtida

  return 0;

}