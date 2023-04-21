#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "questao10.h"

void entradaq10(char *senha[100]){
    printf("Digite a senha: ");
    scanf("%[^\n]", senha);
}

char *processamentoq10(char senha[100], char senhaPC[100]){
    string_maiusculaq10(senha);
    senhaPC = "LINGUAGEMC";
    if (strcmp(senhaPC, senha)==0){
        return "VALIDA";
    }
    else{
        return "INVALIDA";
    }
}

void saidaq10(char texto[100]){
    printf("as senha eh %s", texto);
}

void string_maiusculaq10(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        string[i] = toupper(string[i]);
        i++;
    }
}

void questao10(){
    char senha[100];
    char senhaPC[100];
    entradaq10(&senha);
    char *r = processamentoq10(senha, senhaPC);
    saidaq10(r);
}
