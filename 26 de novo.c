// Função : Faça um programa que leia o horário (hora, minuto e segundo) de inicio e a duração, em segundos, de uma experiência biológica.
// O programa deve resultar com o novo horário (hora, minuto e segundo) do término da mesma
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int horaInicio, minutosInicio, segundosInicio, segundosDuracao, novoHorario;

    printf("Digite o horário de inicio da experiencia biológia em horas: ");
    scanf("%d", &horaInicio);

    printf("Digite oos minutos que iniciou a experiência: ");
    scanf("%d", &minutosInicio);

    printf("Digite os segundos: ");
    scanf("%d", &segundosInicio);

    
    printf("digite quantos segundos durarão a experiencia: "); 
    scanf("%d",&segundosDuracao);

    novoHorario = horaInicio + minutosInicio;


    printf("O horário de término da experiência é: %02d:%02d:%02d\n", horaTermino, minutoTermino, segundoTermino);
    return 0;


}