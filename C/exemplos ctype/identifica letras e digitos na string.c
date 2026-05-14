#include <stdio.h>
#include <ctype.h>


int main(){

    char texto[] = "abcd1234!@#+/*";

    for(int i=0; texto[i]!='\0';i++){

    // identifica letras e números apenas
    if(isalnum(texto[i])==1)
       printf("%c,", texto[i]); // exibe as letras e digitos encontrados 

    }


}
