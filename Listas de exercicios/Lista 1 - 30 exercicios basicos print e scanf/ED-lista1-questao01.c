// Fun��o : Fazer um programa para receber 5 valores inteiros do usu�rio e mostrar a sua m�dia (que pode n�o ser inteira).
// Autor : Ednaldo Taurino    
// Data  : 22/09/2023

#include <stdio.h>
#include <locale.h>



int main(){
setlocale(LC_ALL, "Portuguese_BRazil");


    int valor1 , valor2, valor3, valor4, valor5;
    float media = 0 ;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &valor1);
    printf("\n Digite o segundo n�mero : ");
    scanf ("%d", &valor2 );
    printf("\n Digite o terceiro n�mero : ");
    scanf ("%d",&valor3);
    printf("\n Digite o quarto n�mero : ");
    scanf ("%d",&valor4);
    printf("\n Digite o quinto n�mero : ");
    scanf ("%d",&valor5);

    media = (valor1 + valor2+ valor3 + valor4+ valor5 ) / 5 ;

    printf("O valor da m�dia dos valores digitados � de %.2f", media);
return 0;

}