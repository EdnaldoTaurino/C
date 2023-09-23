
// Função :  Faça um programa que leia um valor de área em acres e apresente-o convertido em metros quadrados M ²
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float areaAcres, areaMetrosQuadrados;

    printf("Digite a área em acres: ");
    scanf("%f", &areaAcres);

    areaMetrosQuadrados = areaAcres * 4046.86;

    printf("A área em metros quadrados é: %.2f m²\n", areaMetrosQuadrados);
    
return 0;
}