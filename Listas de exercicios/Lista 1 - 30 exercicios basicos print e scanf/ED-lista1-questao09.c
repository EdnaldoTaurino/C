
// Função : Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.  Fórmula °F=(°C×9/5)+32

// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float temp;

    printf("Qual a temperatura hoje?: ");
    scanf("%f", &temp);

    printf("o Resultado da conversão é: %2.fº Fahrenheit", (temp * 9 / 5) + 32);

return 0;
}