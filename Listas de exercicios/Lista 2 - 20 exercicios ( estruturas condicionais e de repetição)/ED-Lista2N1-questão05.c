/* FUN��O:
    Escreva um programa que leia tr�s valores inteiros e verifique se eles podem ser os lados de um tri�ngulo. 
    Se forem, informar qual o tipo de tri�ngulo que eles formam: equil�tero, is�scele ou escaleno. 
    Propriedade: o comprimento de cada lado de um tri�ngulo � menor do que a soma dos comprimentos dos outros dois lados. 
    Tri�ngulo Equil�tero: aquele que tem os comprimentos dos tr�s lados iguais; Tri�ngulo Is�scele: aquele que tem os comprimentos de dois lados iguais. 
    Portanto, todo tri�ngulo equil�tero � tamb�m is�scele; Tri�ngulo Escaleno: aquele que tem os comprimentos de seus tr�s lados diferentes.   
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil"); 

   int lado1, lado2, lado3;

   // Solicitar ao usu�rio que insira os tr�s lados do tri�ngulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &lado1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &lado2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%d", &lado3);

    // Verificar se os lados podem formar um tri�ngulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Verificar o tipo de tri�ngulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("� um tri�ngulo equil�tero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("� um tri�ngulo is�scele.\n");
        } else {
            printf("� um tri�ngulo escaleno.\n");
        }
    } else {
        printf("Os lados informados n�o podem formar um tri�ngulo.\n");
    }

    return 0;

}