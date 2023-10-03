
// Função : Faça um programa que leia um valor de área em metros quadrados   e apresente-o convertido em acres
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float areaMetrosQuadrados, areaAcres;

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &areaMetrosQuadrados);

    areaAcres = areaMetrosQuadrados * 0.000247105381;

    printf("A área em acres é: %.6f acres\n", areaAcres);

    return 0;
}