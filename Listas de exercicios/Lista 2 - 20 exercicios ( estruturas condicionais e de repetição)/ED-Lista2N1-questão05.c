/* FUNÇÃO:
    Escreva um programa que leia três valores inteiros e verifique se eles podem ser os lados de um triângulo. 
    Se forem, informar qual o tipo de triângulo que eles formam: equilátero, isóscele ou escaleno. 
    Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados. 
    Triângulo Equilátero: aquele que tem os comprimentos dos três lados iguais; Triângulo Isóscele: aquele que tem os comprimentos de dois lados iguais. 
    Portanto, todo triângulo equilátero é também isóscele; Triângulo Escaleno: aquele que tem os comprimentos de seus três lados diferentes.   
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil"); 

   int lado1, lado2, lado3;

   // Solicitar ao usuário que insira os três lados do triângulo
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &lado1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &lado2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%d", &lado3);

    // Verificar se os lados podem formar um triângulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Verificar o tipo de triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É um triângulo equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É um triângulo isóscele.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Os lados informados não podem formar um triângulo.\n");
    }

    return 0;

}