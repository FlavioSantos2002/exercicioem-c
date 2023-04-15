#include <stdio.h>
#include <string.h>
#include <ctype.h>

void entrada(char *senha[100]){
    printf("Digite a senha: ");
    scanf("%[^\n]", senha);
}

char *processamento(char senha[100], char senhaPC[100]){
    string_maiuscula(senha);
    senhaPC = "LINGUAGEMC";
    if (strcmp(senhaPC, senha)==0){
        return "VALIDA";
    }
    else{
        return "INVALIDA";
    }
}

void saida(char texto[100]){
    printf("as senha eh %s", texto);
}

void string_maiuscula(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        string[i] = toupper(string[i]);
        i++;
    }
}

void main(){
    char senha[100];
    char senhaPC[100];
    entrada(&senha);
    char *r = processamento(senha, senhaPC);
    saida(r);
}