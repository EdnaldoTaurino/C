
// Fun��o : Escreva um algoritmo para determinar a �rea e o per�metro de um ret�ngulo
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

// A f�rmula para calcular a �rea de um ret�ngulo �: �rea = Comprimento (L) x Largura (W)
// Per�metro de um Ret�ngulo: A f�rmula para calcular o per�metro de um ret�ngulo �: Per�metro do ret�ngulo = 2 x (base + altura)

float comprimento, largura, base, altura;

printf("Qual comprimento do ret�ngulo?: ");
scanf("%f", &comprimento);
printf("Qual largura do ret�ngulo?: ");
scanf("%f", &largura);
printf("Qual tamanho da base do ret�ngulo?: ");
scanf("%f", &base);
printf("Qual tamanho da altura do ret�ngulo?: ");
scanf("%f", &altura);

float area = comprimento * largura; //�rea do Retangulo
float perimetro = (base + altura) * 2;

printf("A �rea do seu ret�ngulo �: %.2f e o perimetro �: %2.f", area, perimetro);



return 0;
}