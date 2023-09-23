
// Função : Faça um programa que leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float salario;

    printf("Digite o seu salário para calcular o valor com aumento de 25 por cento: ");
    scanf("%f", &salario);

    printf("Seu novo salário é de: %2.f", salario * 1.25);


return 0;
}