#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, soma, numero;
    printf("Digite um número para ver a soma dele:");
    scanf("%d", &numero);
    soma = 0;
    i = 1;
 
    
    while (i <= numero){
        soma = soma + i;
        i++;
    }
    
    printf("A soma dos %d primeiros numeros = %d", numero, soma);
return 1;
}