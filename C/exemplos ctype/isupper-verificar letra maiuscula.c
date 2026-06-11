#include <stdio.h>
#include <ctype.h>

int main(){

   char c = 'C';
   if(isupper(c)==1){
     printf("letra maiuscula");
   }

   char a = 'A';
   int tipo_letra = isupper(a);

   if(tipo_letra==1){
    printf("letra maiuscula"); 
   }

  char str[]="Exemplo De Uso de isupper";
  for(int i=0; str[i]!='\0';i++){

     if(isupper(str[i])==1){
        // exibe letras maiusculas encontradas
        printf("letras maiusculas: %c", str[i]);
     }
     
  }
  
 return 0;
  
}
