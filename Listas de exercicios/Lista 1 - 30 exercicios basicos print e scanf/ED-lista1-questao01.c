// Função : Fazer um programa para receber 5 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
// Autor : Ednaldo Taurino    
// Data  : 22/09/2023

#include <stdio.h>
#include <locale.h>



int main(){
setlocale(LC_ALL, "Portuguese_BRazil");


    int valor1 , valor2, valor3, valor4, valor5;
    float media = 0 ;

    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    printf("\n Digite o segundo número : ");
    scanf ("%d", &valor2 );
    printf("\n Digite o terceiro número : ");
    scanf ("%d",&valor3);
    printf("\n Digite o quarto número : ");
    scanf ("%d",&valor4);
    printf("\n Digite o quinto número : ");
    scanf ("%d",&valor5);

    media = (valor1 + valor2+ valor3 + valor4+ valor5 ) / 5 ;

    printf("O valor da média dos valores digitados é de %.2f", media);
return 0;

}