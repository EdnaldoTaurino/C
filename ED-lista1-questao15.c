
// Função : Leia uma distância em quilômetros e apresente-a convertida em milhas.
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float quilometros, milhas;

    printf("Digite a distância em quilômetros: ");
    scanf("%f", &quilometros);

    milhas = quilometros * 0.621371;

    printf("A distância em milhas é: %.2f mi\n", milhas);


    
return 0;
}