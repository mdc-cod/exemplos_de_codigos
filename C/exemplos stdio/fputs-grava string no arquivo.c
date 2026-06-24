#include <stdio.h>

int main(){

  FILE *veiculo = fopen("tipo.txt","w"); // cria o arquivo para escrita

  fputs("carro", veiculo); // grava a string no arquivo

  fclose(nome); // fecha o arquivo 

}