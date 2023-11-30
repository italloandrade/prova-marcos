#include <stdio.h>

int calcula(int num1, int num2){
    
    if (num1 < num2){
        int soma = num1 + num2;
        return soma;
    }
    else 
        if(num1 == num2){{
            int multiplicacao = num1 * num2;
            return multiplicacao;
        }
    }else{
        int subtracao = num1 - num2;
        return subtracao;
    }
    }
int main(){
    int x, y;
    int result;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &x);
    printf("Digite o segundo numero: \n");
    scanf("%d", &y);

    result = calcula(x, y);
    printf("O resultado eh: %d", result);



}



