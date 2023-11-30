#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho_medio(char string1[], char string2[]){
    int tamanho = 0;
    int tamanho1 = 0;
    for(int i = 0; i < string1; i++){
        string1[i]++;
    }
    for(int j = 0; j < string2; j++){
        string2[j]++;
    }
    tamanho = strlen(string1, string2);
}

int main(){
    char string1[100];
    char string2[100];
    int x;

    printf("Digite a primeira string: ");
    gets(string1);
    printf("Digite a segunda string: ");
    gets(string2);

    x = tamanho_medio(string1, string2);
    printf(x);
    



}