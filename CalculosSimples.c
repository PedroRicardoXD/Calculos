#include <stdio.h>

int main(){
    /*
    Soma(+)
    Subtração(-)
    Multiplicação(*)
    Divisão(/)
    */
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1:\n");
    scanf("%d", &numero1);

    printf("Entre com o númeo 2: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2; // soma

    subtracao = numero1 - numero2; // subtração

    multiplicacao = numero1 * numero2; // multiplicação

    divisao = numero1 / numero2; // divisao 

    printf("A soma é:%d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

}