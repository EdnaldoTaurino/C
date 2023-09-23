//Leia uma velocidade em km/h (quilometros por hora) e apresente convertida em m/s (metros por segundo). A formula de converssão é M = K/3.6 , sendo K a velocidade em
// km/h e M em m/s

// Autor : Ednaldo Taurino    
// Data  : 22/09/2023


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float velocidade, metros;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    metros = velocidade / 3.6;
    printf("A velocidade %.2f K/h em metros por segundo é de %.2f M/s", velocidade, metros);


    return 0;
}

