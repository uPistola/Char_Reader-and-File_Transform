#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    char arquivo_padrao[20];
    char ch;
    char arquivo_maiuscula[20];


    puts("Insira o arquivo original e o nome do novo arquivo: ");

    scanf("%s %s", arquivo_padrao, arquivo_maiuscula);
    FILE *texto = fopen(arquivo_padrao, "r");
  
    FILE *fp_uppercase = fopen(arquivo_maiuscula, "w");

    if (texto == NULL)
    {
        puts("Erro ao ver o Arquivo");
    } else {
        while (ch != EOF) {
            ch = fgetc(texto);
            if((ch >= 'a') && (ch <= 'z')){
                 ch = ch - 32;
                fprintf(fp_uppercase, "%c",ch);
            }
            else if(ch > 0){
              fprintf(fp_uppercase, "%c",ch);
            }
        }
        printf("%s Foi criado com Sucesso!",arquivo_maiuscula);
    }
    fclose(fp_uppercase); 
    fclose(texto);
    return 0;
  }