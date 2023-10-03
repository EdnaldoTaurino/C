/* FUNÇÃO:
   Crie um programa que converta uma temperatura em Celsius para Fahrenheit ou vice-versa, dependendo da escolha do usuário.
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observações: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");

int opcao;
    float temperatura, resultado;

    printf("Escolha uma opção:\n");
    printf("1. Converter de Celsius para Fahrenheit\n");
    printf("2. Converter de Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        resultado = (temperatura * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", resultado);
    } else if (opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = (temperatura - 32) * 5 / 9;
        printf("Temperatura em Celsius: %.2f\n", resultado);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}