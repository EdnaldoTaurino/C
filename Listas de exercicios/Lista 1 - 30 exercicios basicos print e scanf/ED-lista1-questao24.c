
// Fun��o : Fa�a um programa que leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float segundos, horas, minutos;

    printf("Digite os segundos: ");
    scanf("%f", &segundos);

    minutos = segundos / 60;
    horas = segundos / 3600;

    printf("o valor dos segundos em minutos � : %2.f minutos. \n e em horas � de: %2.f horas", minutos, horas);
return 0;
}