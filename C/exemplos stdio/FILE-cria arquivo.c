
  /*
   * "w" (write) cria arquivo para escrita, se o arquivo já existir o conteúdo 
   *  do arquivo será substituído pelo novo conteudo
   *
   * "a" (append) cria o arquivo , se não existir, para escrita, 
   *se o arquivo já existir o conteúdo a ser escrito será adicionado no final do arquivo
   *
   * "r" faz a leitura do arquivo
   */
  

#include <stdio.h>

int main(){
 
  FILE *arquivo = fopen("nome_do_arquivo.txt", "w"); //cria arquivo do tipo txt para "w" (write) escrita
  
  fclose(arquivo); // fecha o arquivo 

}