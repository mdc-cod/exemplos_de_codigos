#include <stdio.h>

int main(){

  FILE *letra = fopen("a.txt", "w"); // cria o arquivo para escrita 

  fputc('a', letra); // grava a letra 'a' no arquivo

  fclose(letra);// fecha o arquivo 

  return 0;

}