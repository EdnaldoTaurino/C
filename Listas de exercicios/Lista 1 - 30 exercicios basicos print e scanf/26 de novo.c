// Fun��o : Fa�a um programa que leia o hor�rio (hora, minuto e segundo) de inicio e a dura��o, em segundos, de uma experi�ncia biol�gica.
// O programa deve resultar com o novo hor�rio (hora, minuto e segundo) do t�rmino da mesma
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_BRazil");

    int horaInicio, minutosInicio, segundosInicio, segundosDuracao, novoHorario;

    printf("Digite o hor�rio de inicio da experiencia biol�gia em horas: ");
    scanf("%d", &horaInicio);

    printf("Digite oos minutos que iniciou a experi�ncia: ");
    scanf("%d", &minutosInicio);

    printf("Digite os segundos: ");
    scanf("%d", &segundosInicio);

    
    printf("digite quantos segundos durar�o a experiencia: "); 
    scanf("%d",&segundosDuracao);

    novoHorario = horaInicio + minutosInicio;


    printf("O hor�rio de t�rmino da experi�ncia �: %02d:%02d:%02d\n", horaTermino, minutoTermino, segundoTermino);
    return 0;


}