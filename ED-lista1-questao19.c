
// Fun��o : Fa�a um programa que leia um valor de volume em metros c�bicos  e apresente-oconvertido em litros.M= K/3.6 m3

// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float cubicos, litros;

    printf("Digite o volume em metros c�bicos: ");
    scanf("%f", &cubicos);

    litros = cubicos * 1000;

    printf("O volume em litros �: %.2f litros\n", litros);

    return 0;
}