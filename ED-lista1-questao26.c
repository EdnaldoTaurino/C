
// Função : Faça um programa que leia o horário (hora, minuto e segundo) de inicio e a duração, em segundos, de uma experiência biológica.
// O programa deve resultar com o novo horário (hora, minuto e segundo) do término da mesma
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int horaInicio, minutoInicio, segundoInicio;
    int duracaoSegundos;

    printf("Digite o horário de início: ");
    scanf("%d", &horaInicio);
    printf("Digite o horário de início em minutos: ");
    scanf("%d", &minutoInicio);
    printf("Digite os segundos restantes: ");
    scanf("%i", &segundoInicio);

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracaoSegundos);

    int horarioInicioSegundos = horaInicio * 3600 + minutoInicio * 60 + segundoInicio;

    int horarioTerminoSegundos = horarioInicioSegundos + duracaoSegundos;

    int horaTermino = horarioTerminoSegundos / 3600;
    int minutoTermino = (horarioTerminoSegundos % 3600) / 60;
    int segundoTermino = horarioTerminoSegundos % 60;

    printf("O horário de término da experiência é: %02d:%02d:%02d\n", horaTermino, minutoTermino, segundoTermino);

    return 0;
}