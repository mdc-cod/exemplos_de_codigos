
#include <stdio.h>
#include <ctype.h>


int main(){

    char texto[] = "abcd1234efgh";

    for(int i=0; texto[i]!='\0';i++){

    // identifica os digitos no texto
    if(isdigit(texto[i])==1)
       printf("%c, ", texto[i]); // exibe os digitos encontrados 

    }


}
