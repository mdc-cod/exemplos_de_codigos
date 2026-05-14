
#include <stdio.h>
#include <ctype.h>


int main(){

    char texto[] = "abcd1234";

    for(int i=0; texto[i]!='\0';i++){

    if(isalpha(texto[i])==1)
       printf("%c, ", texto[i]); // exibe apenas as letras no texto

    }
}
