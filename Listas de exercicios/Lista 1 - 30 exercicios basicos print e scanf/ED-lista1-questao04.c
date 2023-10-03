
// Função : Escreva um algoritmo para determinar a área e o perímetro de um retângulo
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

// A fórmula para calcular a área de um retângulo é: Área = Comprimento (L) x Largura (W)
// Perímetro de um Retângulo: A fórmula para calcular o perímetro de um retângulo é: Perímetro do retângulo = 2 x (base + altura)

float comprimento, largura, base, altura;

printf("Qual comprimento do retângulo?: ");
scanf("%f", &comprimento);
printf("Qual largura do retângulo?: ");
scanf("%f", &largura);
printf("Qual tamanho da base do retângulo?: ");
scanf("%f", &base);
printf("Qual tamanho da altura do retângulo?: ");
scanf("%f", &altura);

float area = comprimento * largura; //Área do Retangulo
float perimetro = (base + altura) * 2;

printf("A área do seu retângulo é: %.2f e o perimetro é: %2.f", area, perimetro);



return 0;
}