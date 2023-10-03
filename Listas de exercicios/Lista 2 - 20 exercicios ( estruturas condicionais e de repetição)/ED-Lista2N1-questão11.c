/* FUN��O:
     Escreva um programa que receba 3 n�meros inteiros como entrada e imprima, como sa�da, os n�meros em ordem crescente
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

    int n1, n2, n3, retorno;
    char letra;

    do {
        printf("Digite tr�s numeros inteiros: \n");
        retorno = scanf("%d %d %d", &n1, &n2, &n3);

        if (retorno == 0) {
            printf("Voc� n�o digitou um n�mero v�lido. \n");
            system("pause");
            system("cls");
        
            do {
                letra = getchar();  // limpa o buffer por que o c entende o ENTER e buga
            } while (letra != '\n');
        }
    } while (retorno == 0);

    if (n1 <= n2 && n1 <= n3) {
        if (n2 <= n3) {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n1, n2, n3);
        } else {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n1, n3, n2);
        }
    } else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3) {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n2, n1, n3);
        } else {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n2, n3, n1);
        }
    } else if (n3 <= n1 && n3 <= n2) {
        if (n1 <= n2) {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n3, n1, n2);
        } else {
            printf("Em ordem crescente dos n�meros digitados: %d %d %d\n", n3, n2, n1);
        }
    }
   

    
    
    












    return 0;
}
  