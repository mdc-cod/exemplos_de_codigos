
#include <stdio.h>
#include <ctype.h>


int main(){

    char texto[] = "abcd1234\n\n \n!@+**:;,?-.!";

    for(int i=0; texto[i]!='\0';i++){

    // identifica todos os caracteres que são visíveis e espaços 
    if(isprint(texto[i])==1)
       printf("%c,", texto[i]); // exibe os caracteres identificados 
   
    }

}
