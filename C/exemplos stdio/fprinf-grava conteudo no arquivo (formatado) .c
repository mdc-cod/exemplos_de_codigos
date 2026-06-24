#include <stdio.h>

int main(){

  char tipo[]="carro"; // valor a ser gravado 
  
  FILE *veiculo = fopen("tipo_do_veiculo.txt","w"); // cria o arquivo 

  fprintf(veiculo, "tipo de veiculo: %s", tipo); // grava o conteúdo formatado no arquivo com o valor da string tipo[]

  fclose(veiculo);

  return 0;

}