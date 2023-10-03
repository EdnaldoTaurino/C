// Função : Leia um angulo em radianos e apresente-o convertido em graus.
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <math.h>

int main() {
    float anguloRadianos, anguloGraus;
    const float PI = 3.141592653589793;  //Define PI como uma variavel constante ( que não muda);

    printf("Digite o ângulo em radianos: ");
    scanf("%f", &anguloRadianos);

    anguloGraus = (anguloRadianos * 180) / PI;

    printf("O ângulo em graus é: %.6f graus\n", anguloGraus);

    return 0;
}
