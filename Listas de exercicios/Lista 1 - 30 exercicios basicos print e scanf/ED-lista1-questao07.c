
// Fun��o :Leia um numero real e imprima o resultado do quadrado e do cubo desse numero
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float numero, quadrado, cubo;
    printf("Digite um n�mero para saber seu quadrado e cubo: ");
    scanf("%f", &numero);

    quadrado = pow(numero, 2);  // pow fun��o de potencia 
    cubo=pow (numero , 3) ;

    // quadrado = numero * numero;
    // cubo = numero * numero * numero;

    printf("O quadrado do n�mero %2.f �: %2.f e seu cubo: %2.f", numero, quadrado, cubo);
        
    
return 0;
}