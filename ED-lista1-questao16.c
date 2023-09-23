
// Função : Leia um angulo em graus e apresente-o convertido em radianos. multiplicar o número de radianos por 180/?. 
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float graus, radianos;
    const float PI = 3.141592653589793;

    printf("Digite o valor do ângulo em GRAUS: ");
    scanf("%f", &graus);

    radianos = (graus * PI) / 180;
    printf("\nO Valor de %g° é igual a %.4frad.", graus ,radianos);
    

    
return 0;
}