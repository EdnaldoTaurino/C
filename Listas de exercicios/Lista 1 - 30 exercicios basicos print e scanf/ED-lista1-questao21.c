
// Fun��o :  Fa�a um programa que leia um valor de �rea em acres e apresente-o convertido em metros quadrados M �
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float areaAcres, areaMetrosQuadrados;

    printf("Digite a �rea em acres: ");
    scanf("%f", &areaAcres);

    areaMetrosQuadrados = areaAcres * 4046.86;

    printf("A �rea em metros quadrados �: %.2f m�\n", areaMetrosQuadrados);
    
return 0;
}