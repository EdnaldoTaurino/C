
// Fun��o : Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int n1, n2, n3, resultado;

    printf("Digite tr�s n�meros inteiros digite o n�mero um: ");
    scanf("%d", &n1);
    printf(" Digite agora o segundo n�mero: ");
    scanf("%d", &n2);
    printf(" Digite mais uma vez o terceiro n�mero: ");
    scanf("%d", &n3);

    resultado = n1 + n2 + n3;
    printf("A soma dos n�meros � %i ", resultado);

    return 0;
}