
// Função : Faça um programa que leia a altura e o raio de um cilindro circular e imprima o volume do cilindro  Volume= ? ×raio 2 × altura
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float raio, altura, volume;
    const float PI = 3.14159265358979323846; 

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2) * altura;

    printf("O volume do cilindro é: %.2f unidades cúbicas\n", volume);


return 0;
}