
// Função : Criar um programa para calcular e imprimir o salário líquido de um (pobre) professor.
// Os dados fornecidos serão: o valor da hora-aula, número de aulas dadas no mês e percentual de desconto do INSS
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

    printf("Quantas aulas foram dadas no mês? ");
    scanf("%f", &numeroAula);

    printf("Qual percentual de desnconto do INSS? ");
    scanf("%f", &inss);

    inss = inss / 100;

    salario = (horaAula * numeroAula) - inss;
    printf("\nO seu salário é: %.2f\n", salario);

    return 0;
}