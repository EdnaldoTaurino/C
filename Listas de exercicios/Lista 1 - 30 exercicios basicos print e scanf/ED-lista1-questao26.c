
// Fun��o : Fa�a um programa que leia o hor�rio (hora, minuto e segundo) de inicio e a dura��o, em segundos, de uma experi�ncia biol�gica.
// O programa deve resultar com o novo hor�rio (hora, minuto e segundo) do t�rmino da mesma
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int horaInicio, minutoInicio, segundoInicio;
    int duracaoSegundos;

    printf("Digite o hor�rio de in�cio: ");
    scanf("%d", &horaInicio);
    printf("Digite o hor�rio de in�cio em minutos: ");
    scanf("%d", &minutoInicio);
    printf("Digite os segundos restantes: ");
    scanf("%i", &segundoInicio);

    printf("Digite a dura��o em segundos: ");
    scanf("%d", &duracaoSegundos);

    int horarioInicioSegundos = horaInicio * 3600 + minutoInicio * 60 + segundoInicio;

    int horarioTerminoSegundos = horarioInicioSegundos + duracaoSegundos;

    int horaTermino = horarioTerminoSegundos / 3600;
    int minutoTermino = (horarioTerminoSegundos % 3600) / 60;
    int segundoTermino = horarioTerminoSegundos % 60;

    printf("O hor�rio de t�rmino da experi�ncia �: %02d:%02d:%02d\n", horaTermino, minutoTermino, segundoTermino);

    return 0;
}