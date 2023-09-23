
// Função : Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main() {
    float Fahrenheit, Celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5.0 / 9.0;

    printf("A temperatura em graus Celsius é: %.2f°C\n", Celsius);

    return 0;


}