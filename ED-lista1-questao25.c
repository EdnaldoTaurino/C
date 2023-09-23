
// Função : Faça um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distancia da origem ( 0, 0)
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023
// observações: Usando o teorema de pitagoras, Distancia = raizquadrada de x² + y²

#include <stdio.h>
#include <locale.h>
# include <math.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");  

    float x, y, distancia;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);

    printf("Digite a coordenada y: ");
    scanf ("%f",&y );
   
    distancia =  sqrt(x * x + y * y);
    printf("A distância do ponto de origem (0,0) é de: %2.f " , distancia);


    
return 0;
}