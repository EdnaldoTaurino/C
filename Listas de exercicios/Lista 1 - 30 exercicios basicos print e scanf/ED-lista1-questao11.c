
// Função : Leia uma temperatura em Kelvin e apresente-a convertida em graus Celsius.
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float Kelvin, Celsius;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &Kelvin);

    Celsius = Kelvin - 273.15;

    printf("A temperatura em graus Celsius é: %.2f°C\n", Celsius);

    return 0;
}