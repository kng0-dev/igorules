#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, subtracao, divisao, multiplicacao;

    printf("Digite aqui o primeiro número:\n");
    scanf("%d", &numero1);
    printf("Digite aqui o segundo número:\n");
    scanf("%d", &numero2);

    
    soma = numero1 + numero2;
    // operação soma

    subtracao = numero1 - numero2;
    // operação subtração

    divisao = numero1 / numero2;
    // operação divisão

    multiplicacao = numero1 * numero2;
    // operação multiplicação


    printf("A soma é: %d\n", soma);
    printf("A subtracao é: %d\n", subtracao);
    printf("A divisao é: %d \n", divisao);
    printf("A multiplicacao é: %d\n", multiplicacao);

}