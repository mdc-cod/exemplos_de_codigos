#include <stdio.h>


int main(){

  FILE *arquivo = fopen("nome_do_arquivo.txt", "w"); //cria arquivo do tipo txt para "w" (write) escrita


 fclose(arquivo); // fecha o arquivo 

}