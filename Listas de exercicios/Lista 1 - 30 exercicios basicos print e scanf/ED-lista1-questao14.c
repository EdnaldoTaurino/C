
// Fun��o : Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros.
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float milhas, resultado;
    printf("Digite a quantidade de milhas: ");
    scanf("%f", &milhas);
    
    resultado = milhas * 1.6;
    printf("O resultado �: %2.f Quilometros", resultado);

    
return 0;
}