/* FUN��O:
   Fa�a um programa que receba um numero inteiro e verifique se este numero � par ou �mpar
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observa��es: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
setlocale(LC_ALL, "Portuguese_BRazil");
   int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d � um n�mero par.\n", numero);
    } else {
        printf("%d � um n�mero �mpar.\n", numero);
    }

    return 0;
}