
#include <stdio.h>
#include <ctype.h>


int main(){

    char texto[] = "abcd1234efgh";

    for(int i=0; texto[i]!='\0';i++){

    // identifica as letras no texto 
    if(isalpha(texto[i])==1)
       printf("%c, ", texto[i]); // exibe as letras encontradas 

    }
}
