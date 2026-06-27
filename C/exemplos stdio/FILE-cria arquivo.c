
  

#include <stdio.h>

int main(){
 
  

  // "w" arquivo criado para escrita 
  // se o arquivo já existir o conteúdo será substituído pelo novo

  // "a" arquivo criado para escrita 
  // se o arquivo já existir o conteúdo novo será adicionado no final do arquivo

  // "r" leitura de arquivo


  FILE *arquivo = fopen("nome_do_arquivo.txt", "w"); //cria arquivo do tipo txt para "w" (write) escrita
  
  // código para escrever no arquivo...

  fclose(arquivo); // fecha o arquivo 

  return 0;

}