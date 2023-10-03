
// Fun��o : Fa�a um programa que use a equa��o de Torricelli para calcular a velocidade de um corpo em rela��o ao espa�o que ele percorre. A equa��o de Torriceli � a seguinte:
// V� = V0� + 2a delta s , sendo v a velocidade final (em m/s), v0 a velocidade inicial( em m/s)
// a � a aceler��o (em m/s) e delta s o espa�o percorrido pelo corpo ( em m).
// Use a fun��o SQTR() da biblioteca math.h para tirar a raiz quadrada, caso sejaq necessario.

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

    printf("Digite a acelera��o: ");
    scanf("%f", &aceleracao);

    printf("Digite o espa�o percorrido: ");
    scanf("%f", &espacoPercorrido);

    // v� = v0� + 2a delta s
    velocidadeFinal = sqrt(velocidadeInicial * velocidadeInicial + 2 * aceleracao * espacoPercorrido);
    printf("Velocidade final: %.2f m/s\n", velocidadeFinal);

    return 0;
}
