// Fun��o : Fa�a um programa para calcular a densidade de uma subst�ncia dados a massa e o volume da mesma densidade(p) = massa(m) / volume(v)
// Autor : Ednaldo Taurino    
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");   

    float massa, volume, densidade;

    printf("Digite a massa: ");
    scanf("%f", &massa);

    printf("Digite o volume: ");
    scanf("%f", &volume);

    densidade = massa / volume;

    printf("a densidade da subst�ncia � de: %.3f", densidade);
    
return 0;
}