#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tamanho_medio(char matriz[10][10]){
    char tamanho = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tamanho = strlen(matriz[i][j]);
        }printf("Digite alguma coisa: ");
        gets(matriz);
    }
}

int main(){
    char matriz[10][10];
    tamanho_medio(matriz);
}