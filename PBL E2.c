#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char arquivo_padrao[50];
    int contador[256] = { 0 };
    int k, c;

    puts("Escreva o nome do Arquivo que deseja contar: ");

    scanf("%s", arquivo_padrao);
    FILE *texto = fopen(arquivo_padrao, "r");

    printf("%s \n",  arquivo_padrao);
    
    while(c=fgetc(texto)) {
    if(c == EOF) break;

    contador[c]+=1;
  }

    for(k=96; k<122; k++) {
      if(contador[k] > 0) {
        printf("letra %c: %d vezes\n", k, contador[k]);
      }
    }
    fclose(texto);
    return 0;
  }
