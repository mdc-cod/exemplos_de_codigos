#include <stdio.h>
#include <ctype.h>

int main(){

  char c='c';
  if(islower(c)==1){
    printf("letra minuscula");
  }

  char a = 'a';
  int tipo_letra=islower(a);
  
  if(tipo_letra==1){
    printf("letra minuscula");
  }

  char str[]="Exemplo de Uso Do islower";
  for(int i=0;str[i]!='\0';i++){

    if(islower(str[i])==1){
      // exibe todas as letras minúsculas em str[] 
      printf("letras minusculas: %c", str[i]);
    }
  }

  return 0;
}
