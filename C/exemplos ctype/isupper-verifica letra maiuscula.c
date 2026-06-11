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

 return 0;
  
}
