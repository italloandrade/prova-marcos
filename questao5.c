#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palindromo(char string[100]){
    int tamanho = strlen(string);
    char string1[100];
    for(int i = 0; i < 100; i++){
        string[i];
    }
    for(int j = 0; j <100; j--){
        string1[j];
    }
    if (string == string1){
        printf("Palindromo");
    }else{
        printf("Nao eh palindromo.");
    }


}
int main(){
    char string1[100];
    int verifica;
    printf("\n");
    gets(string1);

    verifica = palindromo(string1);

    printf("%c", verifica);
}