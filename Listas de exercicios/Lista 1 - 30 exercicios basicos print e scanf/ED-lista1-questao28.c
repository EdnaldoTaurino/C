
// Fun��o : Criar uma fun��o que calcule a diferen�a entre duas horas distintas de um mesmo dia 
//e retorne o intervalo de tempo entre os dois hor�rios (ler no formato hh:mm e imprimir no formato hh: mm
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   


    int hora1, minuto1, hora2, minuto2;
    int diferencaHora, diferencaMinuto;

    printf("Digite a primeira hora (hh:mm): ");
    scanf("%d:%d", &hora1, &minuto1);

    printf("Digite a segunda hora (hh:mm): ");
    scanf("%d:%d", &hora2, &minuto2);

    // Calcula a diferen�a em minutos
    int totalMinutos1 = hora1 * 60 + minuto1;
    int totalMinutos2 = hora2 * 60 + minuto2;
    int diferencaTotalMinutos = totalMinutos2 - totalMinutos1;

    // Calcula a diferen�a em horas e minutos
    diferencaHora = diferencaTotalMinutos / 60;
    diferencaMinuto = diferencaTotalMinutos % 60;

    printf("A diferen�a entre as duas horas �: %02d:%02d\n", diferencaHora, diferencaMinuto);

    
return 0;
}