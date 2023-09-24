
// Função : Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora).
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float velocidade, metros;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    metros = velocidade * 3.6;
    printf("\nO valor em Metros por segundo é %.0f quilometros por hora km/h \n ",metros );


return 0;
}