/* FUN��O:
   Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se for divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100
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

  int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d � um ano bissexto.\n", ano);
    } else {
        printf("%d n�o � um ano bissexto.\n", ano);
    }

    return 0;
}