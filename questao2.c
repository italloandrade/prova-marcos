#include <stdio.h>

int fatorial(int num){
    int result = 1;
    for(int i = 1; i < num; i++){
       result *= i; 
    }
    return result;
}

int main(){
    int num, result;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    result = fatorial(num);
    printf("O fatorial do numero '%d' eh: %d",num, result);
}
