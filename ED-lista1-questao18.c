
// Fun��o : Leia um valor de comprimento em polegadas e apresente-o convertido em cent�metros.
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   


    float polegadas, centimetros;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("O comprimento em cent�metros �: %.2f cm\n", centimetros);


return 0;
}