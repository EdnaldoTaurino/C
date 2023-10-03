// Função : Crie uma aplicação para calcular o IMC (Índice de Massa Corporal) que leia o peso do
// usuário em quilogramas e a altura em metros e que depois calcule e apresente o IMC
// segundo a fórmula: IMC = pesoEmQUilos/ALturaEmMetros² . Além disso, o programa deverá exibir as
// informações seguintes do Ministério da Saúde para que a pessoa possa avaliar seu IMC:
// IMC Classificação
// Abaixo de 18,5 -- Abaixo do peso
// 18,5-24,9 --- Peso normal
// 25,0-29,9 --- Sobrepeso
// 30,0-34,9 --- Obesidade grau I
// 35,0-39,9 --- Obesidade grau II
// Acima de 40 --- Obesidade grau III


// Autor : Ednaldo Taurino    
// Data  : 27/09/2023

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

float peso, altura, imc;

printf("============= Calculo do IMC ( índice de massa corporia) ============= \n");

printf("Digite seu peso: \n");
scanf("%f", &peso);

printf("Digite sua altura:\n ");
scanf("%f", &altura);

imc = peso / (altura * altura);


if (imc < 18.5)
{
    printf("\nSeu IMC é %.2f\nVocê está abaixo do peso.\n", imc );
}else if (imc > 18.5 && imc <= 24.9)
{
    printf ("\n Seu IMC é %.2f\n Você está no peso ideal.", imc);

}else if (imc >= 30.0 && imc <= 34.9)
{
    printf("\n Seu IMC é %.2f\n Você está com sobrepeso.", imc);
}else if (imc >= 35.0 && imc <= 39.9)
{
    printf("\n Seu IMC é %.2f\n Você está obeso Grau I.", imc);
}else if (imc >= 40)
{
    printf("Seu imc é %2.f você está obeso grau III", imc);
}






return 0;
}