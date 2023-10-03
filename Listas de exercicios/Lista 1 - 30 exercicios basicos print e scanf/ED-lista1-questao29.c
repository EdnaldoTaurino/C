
// Função : Faça um programa que use a equação de Torricelli para calcular a velocidade de um corpo em relação ao espaço que ele percorre. A equação de Torriceli é a seguinte:
// V² = V0² + 2a delta s , sendo v a velocidade final (em m/s), v0 a velocidade inicial( em m/s)
// a é a acelerção (em m/s) e delta s o espaço percorrido pelo corpo ( em m).
// Use a função SQTR() da biblioteca math.h para tirar a raiz quadrada, caso sejaq necessario.

// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float velocidadeInicial, aceleracao, espacoPercorrido, velocidadeFinal;

    printf("Digite a velocidade inicial: ");
    scanf("%f", &velocidadeInicial);

    printf("Digite a aceleração: ");
    scanf("%f", &aceleracao);

    printf("Digite o espaço percorrido: ");
    scanf("%f", &espacoPercorrido);

    // v² = v0² + 2a delta s
    velocidadeFinal = sqrt(velocidadeInicial * velocidadeInicial + 2 * aceleracao * espacoPercorrido);
    printf("Velocidade final: %.2f m/s\n", velocidadeFinal);

    return 0;
}
