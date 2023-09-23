
// Função :Leia uma temperatura em graus Celsius e apresente-a convertida em Kelvin.
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float Celsius, Kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &Celsius);

    Kelvin = Celsius + 273.15;

    printf("A temperatura em Kelvin é: %.2f K\n", Kelvin);

    return 0;
}