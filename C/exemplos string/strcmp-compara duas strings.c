#include <stdio.h>
#include <string.h>

int main(){

  char objeto1[] = "cadeira";
  char objeto2[] = "chave";
  
  if(strcmp(objeto1, objeto2)!=0){ // se duas strings forem diferentes, retornará diferente de zero

      printf("%s e %s sao objetos iguais.\n", objeto1,  objeto2);
  }
  
  if(strcmp(objeto1, "cadeira")==0){ // se as duas strings forem iguais, retornará zero

      printf("o objeto1 é %s.", objeto1);   

  }

  return 0;

}