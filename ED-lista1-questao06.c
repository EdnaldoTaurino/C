
// Função : Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int n1, n2, n3, resultado;

    printf("Digite três números inteiros digite o número um: ");
    scanf("%d", &n1);
    printf(" Digite agora o segundo número: ");
    scanf("%d", &n2);
    printf(" Digite mais uma vez o terceiro número: ");
    scanf("%d", &n3);

    resultado = n1 + n2 + n3;
    printf("A soma dos números é %i ", resultado);

    return 0;
}