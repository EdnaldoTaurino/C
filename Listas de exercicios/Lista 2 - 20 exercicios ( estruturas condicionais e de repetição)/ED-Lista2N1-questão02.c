// Função : Elaborar programa que lê os coeficientes  a ,  b  e  c  de uma equação de segundo grau e,
// antes de calcular as raízes, calcula o  delta . Se este for negativo, informe que a equação
// não tem solução real. Se for zero, mostra a única raiz. Se positivo, mostra as duas raízes.

// Autor : Ednaldo Taurino    
// Data  : 26/09/2023

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");

float a , b, c, delta, x1, x2;


printf("DIgite o coeficiente a b e c:\n ");
scanf("%f %f %f", &a, &b, &c);

// ax2 + bx + c = 0 ;

 
// calculando o discriminante delta  ?= b² ?4ac ;

delta = b * b - 4 * a * c ;

if( delta < 0){

    printf("A equanção não tem solução real. ");

}else if (delta == 0)
{
    x1 = -b / (2 * a);
    printf("Única raiz %f", x1 );
    
} else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação tem duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    



return 0;

}