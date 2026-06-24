#include <stdio.h>

int main(){

  char tipo[]="carro"; // valor a ser gravado 
  
  FILE *veiculo = fopen("tipo_do_veiculo.txt","w"); // cria o arquivo 

  // grava o conteúdo formatado no arquivo com o valor da string tipo[]
  fprintf(veiculo, "tipo de veiculo: %s", tipo); 

  fclose(veiculo); // fecha o arquivo 

  return 0;

}