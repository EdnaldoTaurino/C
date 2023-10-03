
// Fun��o : Criar um programa para calcular e imprimir o sal�rio l�quido de um (pobre) professor.
// Os dados fornecidos ser�o: o valor da hora-aula, n�mero de aulas dadas no m�s e percentual de desconto do INSS
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    float salario, horaAula, numeroAula, inss;

    printf("Qual valor da hora-aula? ");
    scanf("%f", &horaAula);

    printf("Quantas aulas foram dadas no m�s? ");
    scanf("%f", &numeroAula);

    printf("Qual percentual de desnconto do INSS? ");
    scanf("%f", &inss);

    inss = inss / 100;

    salario = (horaAula * numeroAula) - inss;
    printf("\nO seu sal�rio �: %.2f\n", salario);

    return 0;
}