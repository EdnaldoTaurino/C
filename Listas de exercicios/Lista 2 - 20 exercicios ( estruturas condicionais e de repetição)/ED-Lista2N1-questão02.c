// Fun��o : Elaborar programa que l� os coeficientes  a ,  b  e  c  de uma equa��o de segundo grau e,
// antes de calcular as ra�zes, calcula o  delta . Se este for negativo, informe que a equa��o
// n�o tem solu��o real. Se for zero, mostra a �nica raiz. Se positivo, mostra as duas ra�zes.

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

 
// calculando o discriminante delta  ?= b� ?4ac ;

delta = b * b - 4 * a * c ;

if( delta < 0){

    printf("A equan��o n�o tem solu��o real. ");

}else if (delta == 0)
{
    x1 = -b / (2 * a);
    printf("�nica raiz %f", x1 );
    
} else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equa��o tem duas ra�zes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    



return 0;

}