/* FUN��O:
    Considere as equa��es de movimento para calcular a posi��o ( s ) e a velocidade ( v ) de uma part�cula em determinado instante  t , dado sua acelera��o  a , posi��o inicial   e
    velocidade inicial  , de acordo com as f�rmulas: s(t) = s0 + v0*t + 1/2 * a* t^2, v(t)= v0+ at. Escreva um programa completo que capture os valores de 
    s0,v0,a,t fornecidos via teclado, e calcule e exiba os valore de   e  . Todos os valores tratados no programa devem ser reais.
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observa��es: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");

double s0, v0, a, t;
    double s, v;

    printf("Digite a posi��o inicial (s0): ");
    scanf("%lf", &s0);

    printf("Digite a velocidade inicial (v0): ");
    scanf("%lf", &v0);

    printf("Digite a acelera��o (a): ");
    scanf("%lf", &a);

    printf("Digite o tempo (t): ");
    scanf("%lf", &t);

    // Calcula a posi��o s(t)
    s = s0 + v0 * t + 0.5 * a * t * t;

    // Calcula a velocidade v(t)
    v = v0 + a * t;

    printf("Posi��o s(t): %.2lf\n", s);
    printf("Velocidade v(t): %.2lf\n", v);

    return 0;

}