
// Função : Leia um numero real e imprima a quinta parte deste numero.
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float numero, parte;
    printf("Digite o número para saber sua quinta parte: ");
    scanf("%f", &numero);

    parte = numero / 5;
    printf("O número %2.f sua quinta parte é: %2.f", numero, parte);

    return 0;
}